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
 * ��鵱ǰ�����Ƿ��ǹ���ԱȨ������
 *  ture ��
 *  false ����
 */
bool Util::isAdmin(){
   return IsUserAnAdmin()==TRUE;
}

void Util::active(){
   Exec::Command("slmgr /skms kms.03k.org");
   std::cout<<"���ڼ���ϵͳ���Ե�.."<<std::endl;
   Sleep(3000);
   Exec::Command("slmgr /ato");
   std::cout<<"�������!"<<std::endl;
}

#endif