//
//  main.c
//  learnPointer
//
//  Created by 孙傲 on 2023/4/4.
//

#include <stdio.h>
#include <math.h>
// int a :形参, format variable
void Increment(int a) {
    a = a + 1;
    printf("address a in increment is %d\n", a);
}
void Increment2(int *p) {
    *p = (*p) + 1;
    printf("address *p in increment is %d\n", *p);
}

int main() {
    int a = 10; // 实参 actual variable
//    Increment(a); // call by value,传值
    Increment2(&a); // call by reference, 传引用。节约内存空间
    printf("address a in main is %d\n", a);
}
