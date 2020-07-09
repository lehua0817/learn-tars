package main

import (
	"context"
	"github.com/TarsCloud/TarsGo/tars"
	"github.com/TarsCloud/TarsGo/tars/util/current"
)

// HelloImp servant implementation
type HelloImp struct {
}

// Init servant init
func (imp *HelloImp) Init() error {
	return nil
}

// Destroy servant destory
func (imp *HelloImp) Destroy() {
}

// Add …………
func (imp *HelloImp) Add(ctx context.Context, a int32, b int32, c *int32) (int32, error) {
	logger := tars.GetLogger("context")
	ip, ok := current.GetClientIPFromContext(ctx)
	if !ok {
		logger.Error("Error getting ip from context")
	}
	logger.Infof("Get Client Ip : %s from context", ip)
	*c = a + b
	logger.Infof("%d+%d=%d", a, b, *c)
	return 0, nil
}

// GetStringSize …………
func (imp *HelloImp) GetStringSize(ctx context.Context, content string, size *int32) (int32, error) {

	*size = int32(len(content))
	return 0, nil
}
