//
//  Man.cpp
//  L03_Class_Extends
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include "Man.h"

Man::Man(int age):People(age,1)
{
}

void Man::sayHello()
{
    People::sayHello();
    printf("Man Say :Hello World\n");
}

void Man::eat()
{
    printf("Man eat !!\n");
}