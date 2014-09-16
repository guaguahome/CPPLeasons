//
//  main.cpp
//  L02_NameSpace
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace jkxy;//这里是使用命名空间的访问方式

int main(int argc, const char * argv[])
{
    People *p = new  People(); //这里是使用命名空间的访问方式
    p->sayHello();
    
    delete  p;
    return 0;
}





