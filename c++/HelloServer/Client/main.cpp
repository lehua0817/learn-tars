#include <iostream>
#include "servant/Communicator.h"
#include "Hello.h"

using namespace std;
using namespace TMF;
using namespace tars;

struct HelloCallback : public HelloPrxCallback
{
    //回调函数
    virtual void callback_getStringSize(tars::Int32 ret, tars::Int32 size)
    {
        assert(ret == 0);
        cout << "size = " << size << endl;
    }

    virtual void callback_getStringSize_exception(tars::Int32 ret)
    {
        cout << "callback exception:" << ret << endl;
    }
};

int main(int argc, char **argv)
{

    Communicator comm;
    HelloPrx prx;
    try
    {
        // 直接指定地址来调用服务
        comm.stringToProxy("TMF.HelloServer.HelloObj@tcp -h 172.25.0.5 -p 17247", prx);
        
        // 根据名称来调用服务
        // comm.setProperty("locator", "tars.tarsregistry.QueryObj@tcp -h 172.25.0.3 -p 17890:tcp -h 172.25.0.4 -p 17890");
        // prx = comm.stringToProxy<HelloPrx>("TMF.HelloServer.HelloObj");
        try
        {
            // 测试getStringSize(获取字符串场长度)
            string content = "I Love China!";
            int size = 0;
            int ret = prx->getStringSize(content, size);
            cout << "ret=" << ret << "  size=" << size << endl;

            //定义远程回调对象
            HelloPrxCallbackPtr callback = new HelloCallback;

            // //发起远程调用
            prx->async_getStringSize(callback, content);
        }
        catch (exception &ex)
        {
            cerr << "ex:" << ex.what() << endl;
        }
        catch (...)
        {
            cerr << "unknown exception." << endl;
        }
    }
    catch (exception &e)
    {
        cerr << "exception:" << e.what() << endl;
    }
    catch (...)
    {
        cerr << "unknown exception." << endl;
    }

    sleep(3);
    // getchar();

    return 0;
}