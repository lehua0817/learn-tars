// Package TMF comment
// This file was generated by tars2go 1.1
// Generated from Hello.tars
package TMF

import (
	"context"
	"fmt"
	"unsafe"

	"github.com/TarsCloud/TarsGo/tars"
	m "github.com/TarsCloud/TarsGo/tars/model"
	"github.com/TarsCloud/TarsGo/tars/protocol/codec"
	"github.com/TarsCloud/TarsGo/tars/protocol/res/requestf"
	"github.com/TarsCloud/TarsGo/tars/util/current"
	"github.com/TarsCloud/TarsGo/tars/util/tools"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = fmt.Errorf
var _ = codec.FromInt8
var _ = unsafe.Pointer(nil)

//Hello struct
type Hello struct {
	s m.Servant
}

//Add is the proxy function for the method defined in the tars file, with the context
func (_obj *Hello) Add(A int32, B int32, C *int32, _opt ...map[string]string) (ret int32, err error) {

	var length int32
	var have bool
	var ty byte
	_os := codec.NewBuffer()
	err = _os.Write_int32(A, 1)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32(B, 2)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32((*C), 3)
	if err != nil {
		return ret, err
	}

	var _status map[string]string
	var _context map[string]string
	if len(_opt) == 1 {
		_context = _opt[0]
	} else if len(_opt) == 2 {
		_context = _opt[0]
		_status = _opt[1]
	}
	_resp := new(requestf.ResponsePacket)
	ctx := context.Background()

	err = _obj.s.Tars_invoke(ctx, 0, "Add", _os.ToBytes(), _status, _context, _resp)
	if err != nil {
		return ret, err
	}

	_is := codec.NewReader(tools.Int8ToByte(_resp.SBuffer))
	err = _is.Read_int32(&ret, 0, true)
	if err != nil {
		return ret, err
	}

	err = _is.Read_int32(&(*C), 3, true)
	if err != nil {
		return ret, err
	}

	if len(_opt) == 1 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
	} else if len(_opt) == 2 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
		for k := range _status {
			delete(_status, k)
		}
		for k, v := range _resp.Status {
			_status[k] = v
		}

	}
	_ = length
	_ = have
	_ = ty
	return ret, nil
}

//AddWithContext is the proxy function for the method defined in the tars file, with the context
func (_obj *Hello) AddWithContext(ctx context.Context, A int32, B int32, C *int32, _opt ...map[string]string) (ret int32, err error) {

	var length int32
	var have bool
	var ty byte
	_os := codec.NewBuffer()
	err = _os.Write_int32(A, 1)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32(B, 2)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32((*C), 3)
	if err != nil {
		return ret, err
	}

	var _status map[string]string
	var _context map[string]string
	if len(_opt) == 1 {
		_context = _opt[0]
	} else if len(_opt) == 2 {
		_context = _opt[0]
		_status = _opt[1]
	}
	_resp := new(requestf.ResponsePacket)

	err = _obj.s.Tars_invoke(ctx, 0, "Add", _os.ToBytes(), _status, _context, _resp)
	if err != nil {
		return ret, err
	}

	_is := codec.NewReader(tools.Int8ToByte(_resp.SBuffer))
	err = _is.Read_int32(&ret, 0, true)
	if err != nil {
		return ret, err
	}

	err = _is.Read_int32(&(*C), 3, true)
	if err != nil {
		return ret, err
	}

	if len(_opt) == 1 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
	} else if len(_opt) == 2 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
		for k := range _status {
			delete(_status, k)
		}
		for k, v := range _resp.Status {
			_status[k] = v
		}

	}
	_ = length
	_ = have
	_ = ty
	return ret, nil
}

//AddOneWayWithContext is the proxy function for the method defined in the tars file, with the context
func (_obj *Hello) AddOneWayWithContext(ctx context.Context, A int32, B int32, C *int32, _opt ...map[string]string) (ret int32, err error) {

	var length int32
	var have bool
	var ty byte
	_os := codec.NewBuffer()
	err = _os.Write_int32(A, 1)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32(B, 2)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32((*C), 3)
	if err != nil {
		return ret, err
	}

	var _status map[string]string
	var _context map[string]string
	if len(_opt) == 1 {
		_context = _opt[0]
	} else if len(_opt) == 2 {
		_context = _opt[0]
		_status = _opt[1]
	}
	_resp := new(requestf.ResponsePacket)

	err = _obj.s.Tars_invoke(ctx, 1, "Add", _os.ToBytes(), _status, _context, _resp)
	if err != nil {
		return ret, err
	}

	if len(_opt) == 1 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
	} else if len(_opt) == 2 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
		for k := range _status {
			delete(_status, k)
		}
		for k, v := range _resp.Status {
			_status[k] = v
		}

	}
	_ = length
	_ = have
	_ = ty
	return ret, nil
}

//GetStringSize is the proxy function for the method defined in the tars file, with the context
func (_obj *Hello) GetStringSize(Content string, Size *int32, _opt ...map[string]string) (ret int32, err error) {

	var length int32
	var have bool
	var ty byte
	_os := codec.NewBuffer()
	err = _os.Write_string(Content, 1)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32((*Size), 2)
	if err != nil {
		return ret, err
	}

	var _status map[string]string
	var _context map[string]string
	if len(_opt) == 1 {
		_context = _opt[0]
	} else if len(_opt) == 2 {
		_context = _opt[0]
		_status = _opt[1]
	}
	_resp := new(requestf.ResponsePacket)
	ctx := context.Background()

	err = _obj.s.Tars_invoke(ctx, 0, "GetStringSize", _os.ToBytes(), _status, _context, _resp)
	if err != nil {
		return ret, err
	}

	_is := codec.NewReader(tools.Int8ToByte(_resp.SBuffer))
	err = _is.Read_int32(&ret, 0, true)
	if err != nil {
		return ret, err
	}

	err = _is.Read_int32(&(*Size), 2, true)
	if err != nil {
		return ret, err
	}

	if len(_opt) == 1 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
	} else if len(_opt) == 2 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
		for k := range _status {
			delete(_status, k)
		}
		for k, v := range _resp.Status {
			_status[k] = v
		}

	}
	_ = length
	_ = have
	_ = ty
	return ret, nil
}

//GetStringSizeWithContext is the proxy function for the method defined in the tars file, with the context
func (_obj *Hello) GetStringSizeWithContext(ctx context.Context, Content string, Size *int32, _opt ...map[string]string) (ret int32, err error) {

	var length int32
	var have bool
	var ty byte
	_os := codec.NewBuffer()
	err = _os.Write_string(Content, 1)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32((*Size), 2)
	if err != nil {
		return ret, err
	}

	var _status map[string]string
	var _context map[string]string
	if len(_opt) == 1 {
		_context = _opt[0]
	} else if len(_opt) == 2 {
		_context = _opt[0]
		_status = _opt[1]
	}
	_resp := new(requestf.ResponsePacket)

	err = _obj.s.Tars_invoke(ctx, 0, "GetStringSize", _os.ToBytes(), _status, _context, _resp)
	if err != nil {
		return ret, err
	}

	_is := codec.NewReader(tools.Int8ToByte(_resp.SBuffer))
	err = _is.Read_int32(&ret, 0, true)
	if err != nil {
		return ret, err
	}

	err = _is.Read_int32(&(*Size), 2, true)
	if err != nil {
		return ret, err
	}

	if len(_opt) == 1 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
	} else if len(_opt) == 2 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
		for k := range _status {
			delete(_status, k)
		}
		for k, v := range _resp.Status {
			_status[k] = v
		}

	}
	_ = length
	_ = have
	_ = ty
	return ret, nil
}

//GetStringSizeOneWayWithContext is the proxy function for the method defined in the tars file, with the context
func (_obj *Hello) GetStringSizeOneWayWithContext(ctx context.Context, Content string, Size *int32, _opt ...map[string]string) (ret int32, err error) {

	var length int32
	var have bool
	var ty byte
	_os := codec.NewBuffer()
	err = _os.Write_string(Content, 1)
	if err != nil {
		return ret, err
	}

	err = _os.Write_int32((*Size), 2)
	if err != nil {
		return ret, err
	}

	var _status map[string]string
	var _context map[string]string
	if len(_opt) == 1 {
		_context = _opt[0]
	} else if len(_opt) == 2 {
		_context = _opt[0]
		_status = _opt[1]
	}
	_resp := new(requestf.ResponsePacket)

	err = _obj.s.Tars_invoke(ctx, 1, "GetStringSize", _os.ToBytes(), _status, _context, _resp)
	if err != nil {
		return ret, err
	}

	if len(_opt) == 1 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
	} else if len(_opt) == 2 {
		for k := range _context {
			delete(_context, k)
		}
		for k, v := range _resp.Context {
			_context[k] = v
		}
		for k := range _status {
			delete(_status, k)
		}
		for k, v := range _resp.Status {
			_status[k] = v
		}

	}
	_ = length
	_ = have
	_ = ty
	return ret, nil
}

//SetServant sets servant for the service.
func (_obj *Hello) SetServant(s m.Servant) {
	_obj.s = s
}

//TarsSetTimeout sets the timeout for the servant which is in ms.
func (_obj *Hello) TarsSetTimeout(t int) {
	_obj.s.TarsSetTimeout(t)
}

//TarsSetProtocol sets the protocol for the servant.
func (_obj *Hello) TarsSetProtocol(p m.Protocol) {
	_obj.s.TarsSetProtocol(p)
}

//AddServant adds servant  for the service.
func (_obj *Hello) AddServant(imp _impHello, obj string) {
	tars.AddServant(_obj, imp, obj)
}

//AddServant adds servant  for the service with context.
func (_obj *Hello) AddServantWithContext(imp _impHelloWithContext, obj string) {
	tars.AddServantWithContext(_obj, imp, obj)
}

type _impHello interface {
	Add(A int32, B int32, C *int32) (ret int32, err error)
	GetStringSize(Content string, Size *int32) (ret int32, err error)
}
type _impHelloWithContext interface {
	Add(ctx context.Context, A int32, B int32, C *int32) (ret int32, err error)
	GetStringSize(ctx context.Context, Content string, Size *int32) (ret int32, err error)
}

// Dispatch is used to call the server side implemnet for the method defined in the tars file. withContext shows using context or not.
func (_obj *Hello) Dispatch(ctx context.Context, _val interface{}, req *requestf.RequestPacket, resp *requestf.ResponsePacket, withContext bool) (err error) {
	var length int32
	var have bool
	var ty byte
	_is := codec.NewReader(tools.Int8ToByte(req.SBuffer))
	_os := codec.NewBuffer()
	switch req.SFuncName {
	case "Add":
		var A int32
		err = _is.Read_int32(&A, 1, true)
		if err != nil {
			return err
		}

		var B int32
		err = _is.Read_int32(&B, 2, true)
		if err != nil {
			return err
		}

		var C int32
		err = _is.Read_int32(&C, 3, false)
		if err != nil {
			return err
		}

		if !withContext {
			_imp := _val.(_impHello)
			ret, err := _imp.Add(A, B, &C)
			if err != nil {
				return err
			}

			err = _os.Write_int32(ret, 0)
			if err != nil {
				return err
			}

		} else {
			_imp := _val.(_impHelloWithContext)
			ret, err := _imp.Add(ctx, A, B, &C)
			if err != nil {
				return err
			}

			err = _os.Write_int32(ret, 0)
			if err != nil {
				return err
			}

		}

		err = _os.Write_int32(C, 3)
		if err != nil {
			return err
		}

	case "GetStringSize":
		var Content string
		err = _is.Read_string(&Content, 1, true)
		if err != nil {
			return err
		}

		var Size int32
		err = _is.Read_int32(&Size, 2, false)
		if err != nil {
			return err
		}

		if !withContext {
			_imp := _val.(_impHello)
			ret, err := _imp.GetStringSize(Content, &Size)
			if err != nil {
				return err
			}

			err = _os.Write_int32(ret, 0)
			if err != nil {
				return err
			}

		} else {
			_imp := _val.(_impHelloWithContext)
			ret, err := _imp.GetStringSize(ctx, Content, &Size)
			if err != nil {
				return err
			}

			err = _os.Write_int32(ret, 0)
			if err != nil {
				return err
			}

		}

		err = _os.Write_int32(Size, 2)
		if err != nil {
			return err
		}

	default:
		return fmt.Errorf("func mismatch")
	}
	var _status map[string]string
	s, ok := current.GetResponseStatus(ctx)
	if ok && s != nil {
		_status = s
	}
	var _context map[string]string
	c, ok := current.GetResponseContext(ctx)
	if ok && c != nil {
		_context = c
	}
	*resp = requestf.ResponsePacket{
		IVersion:     1,
		CPacketType:  0,
		IRequestId:   req.IRequestId,
		IMessageType: 0,
		IRet:         0,
		SBuffer:      tools.ByteToInt8(_os.ToBytes()),
		Status:       _status,
		SResultDesc:  "",
		Context:      _context,
	}

	_ = _is
	_ = _os
	_ = length
	_ = have
	_ = ty
	return nil
}