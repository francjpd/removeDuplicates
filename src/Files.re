open BsNode.StatSync
type file = {
  size: int,
  name: string,
};
let filteredArray: list((int,'a)) = [] 
let addBySize = (files:list('a), ~dir:string) => 
  files
    -> 
      Belt.List.reduce(filteredArray, (accum, file ) => {
        let filesize = statSync(Path({j|$dir/$file|j}),());
        accum
          ->
            Map.set(
              filesize,
              {
                size: size(filesize),
                name: {j|$file|j}
              });
        });
     
let numbersRe = [%re "/\([1-9]\)/"]; 
let excludeDuplicatedByNumber = (files) => 
  files
    |> List.filter(file =>
      numbersRe 
        |> Js.Re.test(file));
let readDirAndPrint = (dir:string) => 
  dir
    |>Node.Fs.readdirSync
    |>Belt.List.fromArray
    |>addBySize(~dir=dir)
    |>Belt.List.toArray
    |>Js.log

readDirAndPrint("/mnt/c/Users/franc/Desktop/fotos");
