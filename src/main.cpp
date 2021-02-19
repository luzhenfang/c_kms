#include <iostream>
#include "util.hpp"
/**
 * @file main.cpp
 * @author luckyFang
 * @date 2021 2.19
 * 
 * 基于cpp的windows10 ksm激活工具
 * 
 */




int main(){
    if(!Util::isAdmin()){
        std::cout<<"请以管理员身份运行!"<<std::endl;
        system("pause");
        return -1;
    }
    // 激活系统
    Util::active();
    system("pause");
    return 0;
}