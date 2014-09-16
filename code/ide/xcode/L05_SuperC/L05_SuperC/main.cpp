//
//  main.cpp
//  L05_SuperC
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>
#include "Man.h"
using namespace jkxy;

int main(int argc, const char * argv[])
{

    Man *m = new Man(20);
    printf("age: %d\n",m->getAge());
    printf("sex：%d\n",m->getSex());
    m->People::sayHello();  //这里是调用父类的方法
         return 0;
}

