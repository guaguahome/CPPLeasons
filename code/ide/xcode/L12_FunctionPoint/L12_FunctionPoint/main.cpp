//
//  main.cpp
//  L12_FunctionPoint
//
//  Created by Steven on 14-9-17.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>

class Object;
typedef void(Object::*SayHi)();

class Object{
public:
    SayHi sayHi;
};

typedef void(Object::*CallaterHandler)();

void threadFunc(Object *target,CallaterHandler handler,int delay)
{
    sleep(delay);
    (target->*handler)();
}

void callater(Object *target ,CallaterHandler handler, int delay)
{
    std::thread t(threadFunc,target,handler,delay);
    t.join();       //线程
}

#define CH(fp)(CallaterHandler)(&fp)

class Hello:public Object
{
public:
    Hello()
    {
//        sayHi = (SayHi)&Hello::HelloSayHi;
//        (this->*sayHi)();
        
        callater(this, CH(Hello::HelloSayHi), 3);
    }
    
    void HelloSayHi()
    {
        printf("Hello CPP\n");
    }
};





int main(int argc, const char * argv[])
{
    Hello *h = new Hello();
    
    delete h;
    
    return 0;
}

