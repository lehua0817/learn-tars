#ifndef _ProxyImp_H_
#define _ProxyImp_H_

#include "servant/Application.h"
#include "Proxy.h"
#include "Hello.h"

using namespace TMF;

class ProxyImp : public TMF::Proxy
{
public:
    virtual ~ProxyImp() {}
    virtual void initialize();
    virtual void destroy();

    // 获取字符串长度
    virtual int getStringSize(const std::string &content, int &size, tars::TarsCurrentPtr current);

public:
    HelloPrx _helloPrx;
};
/////////////////////////////////////////////////////
#endif