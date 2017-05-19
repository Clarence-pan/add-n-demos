
/*
 * Add-N in TypeScript:
 * Requires: node.js + typescript + ts-node
 *     run: ts-node ./add-n.ts
 */

let addN: (n: number) => (x: number) => number = function (n: number): (x: number) => number{
    return function (x: number): number{
        return n + x
    }
}

let add2: (x: number) => number = addN(2)

console.log("add2(3) => %d", add2(3))


