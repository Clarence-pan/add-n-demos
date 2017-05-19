/*
 * Add-N in JavaScript:
 * Requires: node.js ( > v6.x )
 *     run: node ./add-n.js
 */

let addN = n => x => n + x

let add2 = addN(2)

console.log("add2(3) => %d", add2(3))


