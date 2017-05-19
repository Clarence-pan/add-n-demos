//* Add-N in go:
//* Requires: golang
//*     run: go run ./add-n.go

package main

import (
	"fmt"
)

func main() {
	var addN func(n int) func(x int) int = func(n int) func(x int) int {
		return func(x int) int {
			return x + n
		}
	}

	var add2 func(x int) int = addN(2)

	fmt.Printf("add2(3) => %d\n", add2(3))
}
