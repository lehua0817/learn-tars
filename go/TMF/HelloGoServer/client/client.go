package main

import (
	"fmt"

	"github.com/TarsCloud/TarsGo/tars"

	"TMF"
)

func main() {
	comm := tars.NewCommunicator()
	obj := fmt.Sprintf("TMF.HelloGoServer.HelloObj@tcp -h 172.25.0.5 -p 27682 -t 60000")
	app := new(TMF.Hello)
	comm.StringToProxy(obj, app)
	var out, i int32
	i = 123
	ret, err := app.Add(i, i*2, &out)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(ret, out)
}
