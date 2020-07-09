#include <iostream>
#include "servant/Communicator.h"
#include "Hello.h"

using namespace std;
using namespace TMF;
using namespace tars;

int main(int argc, char **argv)
{

    Communicator comm;
    HelloPrx prx;
    try
    {
        // 直接指定地址来调用服务
        comm.stringToProxy("TMF.HelloGoServer.HelloObj@tcp -h 172.25.0.5 -p 27682", prx);

        // 根据名称来调用服务
        // comm.setProperty("locator", "tars.tarsregistry.QueryObj@tcp -h 172.25.0.3 -p 17890:tcp -h 172.25.0.4 -p 17890");
        // prx = comm.stringToProxy<HelloPrx>("TMF.HelloServer.HelloObj");
        try
        {
            // 测试getStringSize(获取字符串场长度)
            string content = "I Love China!";
            int size = 0;
            int ret = prx->GetStringSize(content, size);
            cout << "ret=" << ret << "  size=" << size << endl;
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