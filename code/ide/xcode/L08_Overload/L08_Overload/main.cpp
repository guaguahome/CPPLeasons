//
//  main.cpp
//  L08_Overload
//
//  Created by Steven on 14-9-17.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>

class Hello
{
public:
    void sayHello()
    {
        printf("hi Hwllo\n");
    }
    void sayHello(std::string ss)//函数的重载要求参数不一样，和java类似
    {
        std::string str="hello # ";
        str += ss;
        std::cout<<str<<"\n";
//        printf("hi hello %s \n",ss);
    }
};


int main(int argc, const char * argv[])
{
    Hello *h= new Hello();
    h->sayHello();
    
    std::string name = "Guagua";
    h->sayHello( name );
    
    return 0;
}

