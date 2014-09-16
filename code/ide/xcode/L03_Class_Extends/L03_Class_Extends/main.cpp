//
//  main.cpp
//  L03_Class_Extends
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>
#include "Man.h"

using namespace jkxy;

int main(int argc, const char * argv[])
{
    Man *p = new Man();
    
    p->getSex();
    p->sayHello();
    
    return 0;
}

