//
//  main.cpp
//  L13_Ref
//
//  Created by Steven on 14-9-17.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>

class Point
{
    int x, y;
public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void add(Point &p)  //这里p的前面加一个& 符号，表示的是传得时引用
    {
        this->x += p.x;
        this->y += p.y;
    }
    
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
};

int main(int argc, const char * argv[])
{

    Point p(1,1);
    printf("p Point = x:%d y:%d \n",p.getX(), p.getY());
    Point p1(2,3);
    p.add(p1);
    
    printf("p Point = x:%d y:%d \n",p.getX(), p.getY());
    
    
    
    
    
    
    
    return 0;
}

