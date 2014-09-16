//
//  main.cpp
//  L11_Point
//
//  Created by Steven on 14-9-17.
//  Copyright (c) 2014年 刘欣华. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{

    int *pp;
    int a = 11;
    pp = &a;
    printf("int *pp; 定义了pp是一个指向整数的指针 \n");
    printf("pp 这里反应了指针变量中存储的地址值 -->%d \n", pp);
    printf("*pp 这里反应了指针变量存储的地址指向控件中存储的数据值->%d \n", *pp);
    
    
    return 0;
}

