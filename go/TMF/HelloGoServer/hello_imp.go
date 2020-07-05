package main

import (
	"context"
)

// HelloImp servant implementation
type HelloImp struct {
}

// Init servant init
func (imp *HelloImp) Init() error {
	//initialize servant here:
	//...
	return nil
}

// Destroy servant destory
func (imp *HelloImp) Destroy() {
	//destroy servant here:
	//...
}

// Add …………
func (imp *HelloImp) Add(ctx context.Context, a int32, b int32, c *int32) (int32, error) {
	*c = a + b
	return 0, nil
}

// GetStringSize …………
func (imp *HelloImp) GetStringSize(ctx context.Context, content string, size *int32) (int32, error) {

	*size = int32(len(content))
	return 0, nil
}
