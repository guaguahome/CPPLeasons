//
//  People.h
//  L01OOP
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#ifndef __L01OOP__People__
#define __L01OOP__People__

#include <iostream>
namespace jkxy{
    
    class People
    {
        
    private:
        int age;
        int sex;    //1为男  0为女
    public:
        People(int _age, int _sex);
        People();
        virtual void sayHello();        //虚函数
        //这里加0 就是抽象方法，纯虚函数
        virtual void eat()=0;
        
        
        int getAge();
        int getSex();
        char * name;
    };
}


#endif /* defined(__L01OOP__People__) */
