//
//  pointer2pointer.c
//  learnPointer
//
//  Created by 孙傲 on 2023/4/4.
//

#include <stdio.h>

int chap2() {
    int a = 5;
    int* p = &a;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("*p is %d \n", *p);
    printf("*q is %d \n", *q);
    printf("**q is %d \n", **q);
    printf("*r is %d \n", *r);
    printf("**r is %d \n", **r);
    printf("***r is %d \n", ***r);
    return 0;
}
