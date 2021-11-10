package main

import "C"
import (
	"fmt"

	crx3 "github.com/mediabuyerbot/go-crx3"
)

//export UnpackCrx
func UnpackCrx(path string) {
	fmt.Println(path)
	if err := crx3.Extension(path).Unpack(); err != nil {
		panic(err)
	}
}

func main() {}
