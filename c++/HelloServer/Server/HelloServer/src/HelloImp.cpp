#include "HelloImp.h"
#include "servant/Application.h"

using namespace std;

//////////////////////////////////////////////////////
void HelloImp::initialize()
{
}

//////////////////////////////////////////////////////
void HelloImp::destroy()
{
}

// 字符串拼接
int HelloImp::addString(const vector<string> &vec, std::string &result, tars::TarsCurrentPtr current)
{
    // 以迭代器形式遍历列表
    for (int i = 0; i < vec.size(); i++)
    {
        result.append(vec[i]);
    }

    TLOGDEBUG("HelloImp::addString:"<< "result=" << result << endl);
    return 0;
}

// 获取字符串长度
int HelloImp::getStringSize(const std::string &content, int &size, tars::TarsCurrentPtr current)
{
    size = content.size();
    TLOGDEBUG("HelloImp::getStringSize:" << content << ".size=" << size << endl);
    return 0;
}

// 将字符全部换成大写
int HelloImp::upperString(const std::string &req, std::string &response, tars::TarsCurrentPtr current)
{

    response = req;
    transform(response.begin(), response.end(), response.begin(), ::toupper);

    TLOGDEBUG("HelloImp::upperString:" << req << "-->" << response << endl);
    return 0;
}
