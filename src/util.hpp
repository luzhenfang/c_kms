#ifndef __UTIL__
#define __UTIL__
#include <ShlObj.h>
#include "exec.hpp"
#include <windows.h>
#include <iostream>
class Util
{
private:
    /* data */
public:
    Util
   (/* args */);
    ~Util
   ();

    static bool isAdmin();
    static void active();


};


Util::Util(/* args */)
{
}

Util::~Util()
{
}


/**
 * 检查当前程序是否是管理员权限运行
 *  ture 是
 *  false 不是
 */
bool Util::isAdmin(){
   return IsUserAnAdmin()==TRUE;
}

void Util::active(){
   Exec::Command("slmgr /skms kms.03k.org");
   std::cout<<"正在激活系统请稍等.."<<std::endl;
   Sleep(3000);
   Exec::Command("slmgr /ato");
   std::cout<<"激活完成!"<<std::endl;
}

#endif