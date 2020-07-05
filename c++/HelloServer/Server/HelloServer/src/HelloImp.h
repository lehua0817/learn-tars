#ifndef _HelloImp_H_
#define _HelloImp_H_

#include "servant/Application.h"
#include "Hello.h"

/**
 *
 *
 */
class HelloImp : public TMF::Hello
{
public:
    virtual ~HelloImp() {}
    virtual void initialize();

    virtual void destroy();

    // 字符串拼接
    virtual int addString(const vector<string> &list, std::string &result, tars::TarsCurrentPtr current);

    // 获取字符串长度
    virtual int getStringSize(const std::string &content, int &size, tars::TarsCurrentPtr current);

    // 将字符全部换成大写
    virtual int upperString(const std::string &req, std::string &response, tars::TarsCurrentPtr current);
};

/////////////////////////////////////////////////////
#endif
