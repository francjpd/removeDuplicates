// Generated by BUCKLESCRIPT VERSION 4.0.6, PLEASE EDIT WITH CARE
'use strict';


console.log("Hello, BuckleScript anss test");

function add(x, y) {
  return x + y | 0;
}

function addFive(param) {
  return 5 + param | 0;
}

var eleven = addFive(6);

var twelve = addFive(7);

console.log("test another boom " + (String(twelve) + " "));

console.log("I have decided to learn VIM! boom!");

exports.add = add;
exports.addFive = addFive;
exports.eleven = eleven;
exports.twelve = twelve;
/*  Not a pure module */
