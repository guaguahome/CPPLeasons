//
//  main.cpp
//  L09_Operator
//
//  Created by Steven on 14-9-17.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>

class Point
{
private:
    int x, y;
public:
    
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
      int getX()
    {
        return this->x;
    }
    
      int getY()
    {
        return this->y;
    }
    void add(Point p)
    {
        add(p.getX(), p.getY());
    }
    void add(int x, int y)
    {
        this->x += x;
        this->y += y;
    }
    
    void operator+=(Point p)    //这里就是重载了 += 运算符
    {
        add(p);
    }
    
};




int main(int argc, const char * argv[])
{
    //值对象方式
    Point p(10,20);
    p+=(Point(33,33));
    
    //下面是指针方法
    Point *pp = new Point(5,5);
    (*pp) += Point(2,2); //指针的取值运算符为 *符号
    
    
    
    std::cout<<p.getX()<<"\n"<<p.getY()<<"\n";
    std::cout<<pp->getX()<<"\n"<<pp->getY()<<"\n";
    
    return 0;
}













