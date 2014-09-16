//
//  main.cpp
//  L01OOP
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>
#include "People.h"

//class People{
//public:
//    void sayHello(){
//        printf("Hello CPP\n");
//    }
//};

int main(int argc, const char * argv[])
{

    People *p = new People();
    p->sayHello();
    
    delete p;   //销毁内存
    
    return 0;
}

