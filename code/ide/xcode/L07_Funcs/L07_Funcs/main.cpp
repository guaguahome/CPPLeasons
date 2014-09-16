//
//  main.cpp
//  L07_Funcs
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>
#include "Man.h"
using namespace jkxy;

/**
 *  c++中要实现方法重写， 需要把父类的函数写为虚函数，这里和java中不太一样
 *
 *  @param argc
 *  @param argv
 *
 *  @return
 */
int main(int argc, const char * argv[])
{
    People* p = new Man(20);
    p->sayHello();      //这里会调用父类 People类中得sayHello方法
    p->eat();           //调用纯虚函数
    
    
    
    
    
    return 0;
}

