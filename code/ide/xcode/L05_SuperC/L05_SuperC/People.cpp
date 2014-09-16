//
//  People.cpp
//  L01OOP
//
//  Created by Steven on 14-9-16.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include "People.h"

namespace jkxy{
    People::People()
    {
        this->age = 10;
        this->sex =1;
        printf("People的构造函数");
    }
    
    People::People(int _age,int _sex)
    {
        this->age = _age;
        this->sex = _sex;
    }
    
    int People::getSex(){
        return this->sex;
    }
    
    int People::getAge()
    {
        return this->age;
    }
    
    void People::sayHello()
    {
        this->name = "guagua\n";
        printf("jjjj\n");
        printf(this->name);
    }
}