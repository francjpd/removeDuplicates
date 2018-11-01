type key = String.t; 
type t('a) = Map.Make(String).t('a);
/**
 Value
 */
type value = {
  size: int,
  name: string,
};
let add: (key, 'a, t('a)) => t('a);
let filter: ((key, 'a) => bool, t('a)) => t('a)
let filesMap: t('a); 
let readDirAndPrint: string => unit;
let map: ('a => 'b, t('a)) => t('b);
