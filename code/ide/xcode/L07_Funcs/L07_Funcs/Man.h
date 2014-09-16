//
//  Man.h
//  L03_Class_Extends
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#ifndef __L03_Class_Extends__Man__
#define __L03_Class_Extends__Man__

#include <iostream>
#include "People.h"
using namespace jkxy;

class Man:public People
{
public:
    Man(int age);
    virtual void sayHello(); //注意虚函数，子类在实现的时候也需要加virtual
    virtual void eat();     //实现纯虚函数
};

#endif /* defined(__L03_Class_Extends__Man__) */
