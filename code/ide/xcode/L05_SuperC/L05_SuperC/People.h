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
        void sayHello();
        int getAge();
        int getSex();
        char * name;
    };
}


#endif /* defined(__L01OOP__People__) */
