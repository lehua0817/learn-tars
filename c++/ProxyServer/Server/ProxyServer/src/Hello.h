// **********************************************************************
// This file was generated by a TARS parser!
// TARS version 2.0.0.
// **********************************************************************

#ifndef __HELLO_H_
#define __HELLO_H_

#include <map>
#include <string>
#include <vector>
#include "tup/Tars.h"
#include "tup/TarsJson.h"
using namespace std;
#include "servant/ServantProxy.h"
#include "servant/Servant.h"


namespace TMF
{

    /* callback of async proxy for client */
    class HelloPrxCallback: public tars::ServantProxyCallback
    {
    public:
        virtual ~HelloPrxCallback(){}
        virtual void callback_addString(tars::Int32 ret,  const std::string& resp)
        { throw std::runtime_error("callback_addString() override incorrect."); }
        virtual void callback_addString_exception(tars::Int32 ret)
        { throw std::runtime_error("callback_addString_exception() override incorrect."); }

        virtual void callback_getStringSize(tars::Int32 ret, tars::Int32 size)
        { throw std::runtime_error("callback_getStringSize() override incorrect."); }
        virtual void callback_getStringSize_exception(tars::Int32 ret)
        { throw std::runtime_error("callback_getStringSize_exception() override incorrect."); }

        virtual void callback_upperString(tars::Int32 ret,  const std::string& resp)
        { throw std::runtime_error("callback_upperString() override incorrect."); }
        virtual void callback_upperString_exception(tars::Int32 ret)
        { throw std::runtime_error("callback_upperString_exception() override incorrect."); }

    public:
        virtual const map<std::string, std::string> & getResponseContext() const
        {
            CallbackThreadData * pCbtd = CallbackThreadData::getData();
            assert(pCbtd != NULL);

            if(!pCbtd->getContextValid())
            {
                throw TC_Exception("cann't get response context");
            }
            return pCbtd->getResponseContext();
        }

    public:
        virtual int onDispatch(tars::ReqMessagePtr msg)
        {
            static ::std::string __Hello_all[]=
            {
                "addString",
                "getStringSize",
                "upperString"
            };
            pair<string*, string*> r = equal_range(__Hello_all, __Hello_all+3, string(msg->request.sFuncName));
            if(r.first == r.second) return tars::TARSSERVERNOFUNCERR;
            switch(r.first - __Hello_all)
            {
                case 0:
                {
                    if (msg->response->iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_addString_exception(msg->response->iRet);

                        return msg->response->iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response->sBuffer);
                    tars::Int32 _ret;
                    _is.read(_ret, 0, true);

                    std::string resp;
                    _is.read(resp, 2, true);
                    CallbackThreadData * pCbtd = CallbackThreadData::getData();
                    assert(pCbtd != NULL);

                    pCbtd->setResponseContext(msg->response->context);

                    callback_addString(_ret, resp);

                    pCbtd->delResponseContext();

                    return tars::TARSSERVERSUCCESS;

                }
                case 1:
                {
                    if (msg->response->iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_getStringSize_exception(msg->response->iRet);

                        return msg->response->iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response->sBuffer);
                    tars::Int32 _ret;
                    _is.read(_ret, 0, true);

                    tars::Int32 size;
                    _is.read(size, 2, true);
                    CallbackThreadData * pCbtd = CallbackThreadData::getData();
                    assert(pCbtd != NULL);

                    pCbtd->setResponseContext(msg->response->context);

                    callback_getStringSize(_ret, size);

                    pCbtd->delResponseContext();

                    return tars::TARSSERVERSUCCESS;

                }
                case 2:
                {
                    if (msg->response->iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_upperString_exception(msg->response->iRet);

                        return msg->response->iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response->sBuffer);
                    tars::Int32 _ret;
                    _is.read(_ret, 0, true);

                    std::string resp;
                    _is.read(resp, 2, true);
                    CallbackThreadData * pCbtd = CallbackThreadData::getData();
                    assert(pCbtd != NULL);

                    pCbtd->setResponseContext(msg->response->context);

                    callback_upperString(_ret, resp);

                    pCbtd->delResponseContext();

                    return tars::TARSSERVERSUCCESS;

                }
            }
            return tars::TARSSERVERNOFUNCERR;
        }

    };
    typedef tars::TC_AutoPtr<HelloPrxCallback> HelloPrxCallbackPtr;

    /* callback of coroutine async proxy for client */
    class HelloCoroPrxCallback: public HelloPrxCallback
    {
    public:
        virtual ~HelloCoroPrxCallback(){}
    public:
        virtual const map<std::string, std::string> & getResponseContext() const { return _mRspContext; }

        virtual void setResponseContext(const map<std::string, std::string> &mContext) { _mRspContext = mContext; }

    public:
        int onDispatch(tars::ReqMessagePtr msg)
        {
            static ::std::string __Hello_all[]=
            {
                "addString",
                "getStringSize",
                "upperString"
            };

            pair<string*, string*> r = equal_range(__Hello_all, __Hello_all+3, string(msg->request.sFuncName));
            if(r.first == r.second) return tars::TARSSERVERNOFUNCERR;
            switch(r.first - __Hello_all)
            {
                case 0:
                {
                    if (msg->response->iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_addString_exception(msg->response->iRet);

                        return msg->response->iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response->sBuffer);
                    try
                    {
                        tars::Int32 _ret;
                        _is.read(_ret, 0, true);

                        std::string resp;
                        _is.read(resp, 2, true);
                        setResponseContext(msg->response->context);

                        callback_addString(_ret, resp);

                    }
                    catch(std::exception &ex)
                    {
                        callback_addString_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }
                    catch(...)
                    {
                        callback_addString_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }

                    return tars::TARSSERVERSUCCESS;

                }
                case 1:
                {
                    if (msg->response->iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_getStringSize_exception(msg->response->iRet);

                        return msg->response->iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response->sBuffer);
                    try
                    {
                        tars::Int32 _ret;
                        _is.read(_ret, 0, true);

                        tars::Int32 size;
                        _is.read(size, 2, true);
                        setResponseContext(msg->response->context);

                        callback_getStringSize(_ret, size);

                    }
                    catch(std::exception &ex)
                    {
                        callback_getStringSize_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }
                    catch(...)
                    {
                        callback_getStringSize_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }

                    return tars::TARSSERVERSUCCESS;

                }
                case 2:
                {
                    if (msg->response->iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_upperString_exception(msg->response->iRet);

                        return msg->response->iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response->sBuffer);
                    try
                    {
                        tars::Int32 _ret;
                        _is.read(_ret, 0, true);

                        std::string resp;
                        _is.read(resp, 2, true);
                        setResponseContext(msg->response->context);

                        callback_upperString(_ret, resp);

                    }
                    catch(std::exception &ex)
                    {
                        callback_upperString_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }
                    catch(...)
                    {
                        callback_upperString_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }

                    return tars::TARSSERVERSUCCESS;

                }
            }
            return tars::TARSSERVERNOFUNCERR;
        }

    protected:
        map<std::string, std::string> _mRspContext;
    };
    typedef tars::TC_AutoPtr<HelloCoroPrxCallback> HelloCoroPrxCallbackPtr;

    /* proxy for client */
    class HelloProxy : public tars::ServantProxy
    {
    public:
        typedef map<string, string> TARS_CONTEXT;
        tars::Int32 addString(const vector<std::string> & list,std::string &resp,const map<string, string> &context = TARS_CONTEXT(),map<string, string> * pResponseContext = NULL)
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(list, 1);
            _os.write(resp, 2);
            std::map<string, string> _mStatus;
            shared_ptr<tars::ResponsePacket> rep = tars_invoke(tars::TARSNORMAL,"addString", _os, context, _mStatus);
            if(pResponseContext)
            {
                pResponseContext->swap(rep->context);
            }

            tars::TarsInputStream<tars::BufferReader> _is;
            _is.setBuffer(rep->sBuffer);
            tars::Int32 _ret;
            _is.read(_ret, 0, true);
            _is.read(resp, 2, true);
            return _ret;
        }

        void async_addString(HelloPrxCallbackPtr callback,const vector<std::string> &list,const map<string, string>& context = TARS_CONTEXT())
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(list, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"addString", _os, context, _mStatus, callback);
        }
        
        void coro_addString(HelloCoroPrxCallbackPtr callback,const vector<std::string> &list,const map<string, string>& context = TARS_CONTEXT())
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(list, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"addString", _os, context, _mStatus, callback, true);
        }

        tars::Int32 getStringSize(const std::string & content,tars::Int32 &size,const map<string, string> &context = TARS_CONTEXT(),map<string, string> * pResponseContext = NULL)
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(content, 1);
            _os.write(size, 2);
            std::map<string, string> _mStatus;
            shared_ptr<tars::ResponsePacket> rep = tars_invoke(tars::TARSNORMAL,"getStringSize", _os, context, _mStatus);
            if(pResponseContext)
            {
                pResponseContext->swap(rep->context);
            }

            tars::TarsInputStream<tars::BufferReader> _is;
            _is.setBuffer(rep->sBuffer);
            tars::Int32 _ret;
            _is.read(_ret, 0, true);
            _is.read(size, 2, true);
            return _ret;
        }

        void async_getStringSize(HelloPrxCallbackPtr callback,const std::string &content,const map<string, string>& context = TARS_CONTEXT())
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(content, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"getStringSize", _os, context, _mStatus, callback);
        }
        
        void coro_getStringSize(HelloCoroPrxCallbackPtr callback,const std::string &content,const map<string, string>& context = TARS_CONTEXT())
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(content, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"getStringSize", _os, context, _mStatus, callback, true);
        }

        tars::Int32 upperString(const std::string & req,std::string &resp,const map<string, string> &context = TARS_CONTEXT(),map<string, string> * pResponseContext = NULL)
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(req, 1);
            _os.write(resp, 2);
            std::map<string, string> _mStatus;
            shared_ptr<tars::ResponsePacket> rep = tars_invoke(tars::TARSNORMAL,"upperString", _os, context, _mStatus);
            if(pResponseContext)
            {
                pResponseContext->swap(rep->context);
            }

            tars::TarsInputStream<tars::BufferReader> _is;
            _is.setBuffer(rep->sBuffer);
            tars::Int32 _ret;
            _is.read(_ret, 0, true);
            _is.read(resp, 2, true);
            return _ret;
        }

        void async_upperString(HelloPrxCallbackPtr callback,const std::string &req,const map<string, string>& context = TARS_CONTEXT())
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(req, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"upperString", _os, context, _mStatus, callback);
        }
        
        void coro_upperString(HelloCoroPrxCallbackPtr callback,const std::string &req,const map<string, string>& context = TARS_CONTEXT())
        {
            tars::TarsOutputStream<tars::BufferWriterVector> _os;
            _os.write(req, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"upperString", _os, context, _mStatus, callback, true);
        }

        HelloProxy* tars_hash(int64_t key)
        {
            return (HelloProxy*)ServantProxy::tars_hash(key);
        }

        HelloProxy* tars_consistent_hash(int64_t key)
        {
            return (HelloProxy*)ServantProxy::tars_consistent_hash(key);
        }

        HelloProxy* tars_set_timeout(int msecond)
        {
            return (HelloProxy*)ServantProxy::tars_set_timeout(msecond);
        }

        static const char* tars_prxname() { return "HelloProxy"; }
    };
    typedef tars::TC_AutoPtr<HelloProxy> HelloPrx;

    /* servant for server */
    class Hello : public tars::Servant
    {
    public:
        virtual ~Hello(){}
        virtual tars::Int32 addString(const vector<std::string> & list,std::string &resp,tars::TarsCurrentPtr current) = 0;
        static void async_response_addString(tars::TarsCurrentPtr current, tars::Int32 _ret, const std::string &resp)
        {
            if (current->getRequestVersion() == TUPVERSION )
            {
                UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                tarsAttr.setVersion(current->getRequestVersion());
                tarsAttr.put("", _ret);
                tarsAttr.put("resp", resp);

                vector<char> sTupResponseBuffer;
                tarsAttr.encode(sTupResponseBuffer);
                current->sendResponse(tars::TARSSERVERSUCCESS, sTupResponseBuffer);
            }
            else
            {
                tars::TarsOutputStream<tars::BufferWriterVector> _os;
                _os.write(_ret, 0);

                _os.write(resp, 2);

                current->sendResponse(tars::TARSSERVERSUCCESS, _os.getByteBuffer());
            }
        }

        virtual tars::Int32 getStringSize(const std::string & content,tars::Int32 &size,tars::TarsCurrentPtr current) = 0;
        static void async_response_getStringSize(tars::TarsCurrentPtr current, tars::Int32 _ret, tars::Int32 size)
        {
            if (current->getRequestVersion() == TUPVERSION )
            {
                UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                tarsAttr.setVersion(current->getRequestVersion());
                tarsAttr.put("", _ret);
                tarsAttr.put("size", size);

                vector<char> sTupResponseBuffer;
                tarsAttr.encode(sTupResponseBuffer);
                current->sendResponse(tars::TARSSERVERSUCCESS, sTupResponseBuffer);
            }
            else
            {
                tars::TarsOutputStream<tars::BufferWriterVector> _os;
                _os.write(_ret, 0);

                _os.write(size, 2);

                current->sendResponse(tars::TARSSERVERSUCCESS, _os.getByteBuffer());
            }
        }

        virtual tars::Int32 upperString(const std::string & req,std::string &resp,tars::TarsCurrentPtr current) = 0;
        static void async_response_upperString(tars::TarsCurrentPtr current, tars::Int32 _ret, const std::string &resp)
        {
            if (current->getRequestVersion() == TUPVERSION )
            {
                UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                tarsAttr.setVersion(current->getRequestVersion());
                tarsAttr.put("", _ret);
                tarsAttr.put("resp", resp);

                vector<char> sTupResponseBuffer;
                tarsAttr.encode(sTupResponseBuffer);
                current->sendResponse(tars::TARSSERVERSUCCESS, sTupResponseBuffer);
            }
            else
            {
                tars::TarsOutputStream<tars::BufferWriterVector> _os;
                _os.write(_ret, 0);

                _os.write(resp, 2);

                current->sendResponse(tars::TARSSERVERSUCCESS, _os.getByteBuffer());
            }
        }

    public:
        int onDispatch(tars::TarsCurrentPtr _current, vector<char> &_sResponseBuffer)
        {
            static ::std::string __TMF__Hello_all[]=
            {
                "addString",
                "getStringSize",
                "upperString"
            };

            pair<string*, string*> r = equal_range(__TMF__Hello_all, __TMF__Hello_all+3, _current->getFuncName());
            if(r.first == r.second) return tars::TARSSERVERNOFUNCERR;
            switch(r.first - __TMF__Hello_all)
            {
                case 0:
                {
                    tars::TarsInputStream<tars::BufferReader> _is;
                    _is.setBuffer(_current->getRequestBuffer());
                    vector<std::string> list;
                    std::string resp;
                    if (_current->getRequestVersion() == TUPVERSION)
                    {
                        UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                        tarsAttr.setVersion(_current->getRequestVersion());
                        tarsAttr.decode(_current->getRequestBuffer());
                        tarsAttr.get("list", list);
                        tarsAttr.getByDefault("resp", resp, resp);
                    }
                    else
                    {
                        _is.read(list, 1, true);
                        _is.read(resp, 2, false);
                    }
                    tars::Int32 _ret = addString(list,resp, _current);
                    if(_current->isResponse())
                    {
                        if (_current->getRequestVersion() == TUPVERSION )
                        {
                            UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                            tarsAttr.setVersion(_current->getRequestVersion());
                            tarsAttr.put("", _ret);
                            tarsAttr.put("resp", resp);
                            tarsAttr.encode(_sResponseBuffer);
                        }
                        else
                        {
                            tars::TarsOutputStream<tars::BufferWriterVector> _os;
                            _os.write(_ret, 0);
                            _os.write(resp, 2);
                            _os.swap(_sResponseBuffer);
                        }
                    }
                    return tars::TARSSERVERSUCCESS;

                }
                case 1:
                {
                    tars::TarsInputStream<tars::BufferReader> _is;
                    _is.setBuffer(_current->getRequestBuffer());
                    std::string content;
                    tars::Int32 size;
                    if (_current->getRequestVersion() == TUPVERSION)
                    {
                        UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                        tarsAttr.setVersion(_current->getRequestVersion());
                        tarsAttr.decode(_current->getRequestBuffer());
                        tarsAttr.get("content", content);
                        tarsAttr.getByDefault("size", size, size);
                    }
                    else
                    {
                        _is.read(content, 1, true);
                        _is.read(size, 2, false);
                    }
                    tars::Int32 _ret = getStringSize(content,size, _current);
                    if(_current->isResponse())
                    {
                        if (_current->getRequestVersion() == TUPVERSION )
                        {
                            UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                            tarsAttr.setVersion(_current->getRequestVersion());
                            tarsAttr.put("", _ret);
                            tarsAttr.put("size", size);
                            tarsAttr.encode(_sResponseBuffer);
                        }
                        else
                        {
                            tars::TarsOutputStream<tars::BufferWriterVector> _os;
                            _os.write(_ret, 0);
                            _os.write(size, 2);
                            _os.swap(_sResponseBuffer);
                        }
                    }
                    return tars::TARSSERVERSUCCESS;

                }
                case 2:
                {
                    tars::TarsInputStream<tars::BufferReader> _is;
                    _is.setBuffer(_current->getRequestBuffer());
                    std::string req;
                    std::string resp;
                    if (_current->getRequestVersion() == TUPVERSION)
                    {
                        UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                        tarsAttr.setVersion(_current->getRequestVersion());
                        tarsAttr.decode(_current->getRequestBuffer());
                        tarsAttr.get("req", req);
                        tarsAttr.getByDefault("resp", resp, resp);
                    }
                    else
                    {
                        _is.read(req, 1, true);
                        _is.read(resp, 2, false);
                    }
                    tars::Int32 _ret = upperString(req,resp, _current);
                    if(_current->isResponse())
                    {
                        if (_current->getRequestVersion() == TUPVERSION )
                        {
                            UniAttribute<tars::BufferWriterVector, tars::BufferReader>  tarsAttr;
                            tarsAttr.setVersion(_current->getRequestVersion());
                            tarsAttr.put("", _ret);
                            tarsAttr.put("resp", resp);
                            tarsAttr.encode(_sResponseBuffer);
                        }
                        else
                        {
                            tars::TarsOutputStream<tars::BufferWriterVector> _os;
                            _os.write(_ret, 0);
                            _os.write(resp, 2);
                            _os.swap(_sResponseBuffer);
                        }
                    }
                    return tars::TARSSERVERSUCCESS;

                }
            }
            return tars::TARSSERVERNOFUNCERR;
        }
    };


}



#endif