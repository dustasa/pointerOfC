//
//  main.c
//  learnPointer
//
//  Created by 孙傲 on 2023/4/4.
//

#include <stdio.h>
#include <math.h>

void chap1() {
    int a = 1025;
    // 1025 = 00000000 00000000 00000100 00000001
    int* p;
    p = &a;
    printf("size of integer is %d \n", sizeof(int));
    printf("Address of p is %d, value = %d \n", p, *p);
    printf("Address of p+1 is %d, value = %d \n", p+1, *(p+1));
    // char pointer
    char* p0;
    p0 = (char*)p; // typecasting
    printf("size of char is %d \n", sizeof(char));
    printf("Address of p0 is %d, value = %d \n", p0, *p0);
    printf("Address of p0+1 is %d, value = %d \n", p0+1, *(p0+1));
    // void pointer - 通用类型的指针 generic pointer
    void* p1;
    p1 = p; // 不需要显式的类型转换，因为void指针是通用指针类型，只存储地址
//    printf("Address of p1 is %d, value = %d \n", p1, *p1); // 输出value失败
    printf("Address of p1 is %d \n", p1);
    printf("Address of p1+1 is %d \n", p1+1);
}
