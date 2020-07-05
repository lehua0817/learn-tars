package main

import (
	"TMF"
	"fmt"
	"os"

	"github.com/TarsCloud/TarsGo/tars"
)

func main() {
	// Get server config
	cfg := tars.GetServerConfig()

	// New servant imp
	imp := new(HelloImp)
	err := imp.Init()
	if err != nil {
		fmt.Printf("HelloImp init fail, err:(%s)\n", err)
		os.Exit(-1)
	}
	// New servant
	app := new(TMF.Hello)
	// Register Servant
	app.AddServantWithContext(imp, cfg.App+"."+cfg.Server+".HelloObj")

	// Run application
	tars.Run()
}
