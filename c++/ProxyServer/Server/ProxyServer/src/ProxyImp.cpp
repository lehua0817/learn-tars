#include "ProxyImp.h"
#include "servant/Application.h"

using namespace std;
using namespace TMF;

//////////////////////////////////////////////////////
void ProxyImp::initialize()
{
    CommunicatorPtr comm = Application::getCommunicator();
    // _helloPrx = comm->stringToProxy<HelloPrx>("TMF.HelloServer.HelloObj@tcp -h 172.25.0.5 -p 17247");

    comm->setProperty("locator", "tars.tarsregistry.QueryObj@tcp -h 172.25.0.3 -p 17890:tcp -h 172.25.0.4 -p 17890");
    _helloPrx = comm->stringToProxy<HelloPrx>("TMF.HelloServer.HelloObj");
}

//////////////////////////////////////////////////////
void ProxyImp::destroy()
{
}

// 获取字符串长度
int ProxyImp::getStringSize(const std::string &content, int &size, tars::TarsCurrentPtr current)
{
    int ret = _helloPrx->getStringSize(content, size);

    TLOGDEBUG("ProxyImp::getStringSize:"
              << "  ret=" << ret << "  size=" << size << endl);
    return 0;
}
