#include <iostream>
#include "util.hpp"
/**
 * @file main.cpp
 * @author luckyFang
 * @date 2021 2.19
 * 
 * ����cpp��windows10 ksm�����
 * 
 */




int main(){
    if(!Util::isAdmin()){
        std::cout<<"���Թ���Ա�������!"<<std::endl;
        system("pause");
        return -1;
    }
    // ����ϵͳ
    Util::active();
    system("pause");
    return 0;
}