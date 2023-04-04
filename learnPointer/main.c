//
//  main.c
//  learnPointer
//
//  Created by 孙傲 on 2023/4/4.
//

#include <stdio.h>
#include <math.h>

int main() {
    int a = 1025;
    int* p;
    p = &a;
    printf("size of integer is %d \n", sizeof(int));
    printf("Address of p is %d, value = %d \n", p, *p);
    
    char* p0;
    p0 = (char*)p;
    printf("size of char is %d \n", sizeof(char));
    printf("Address of p is %d, value = %d \n", p0, *p0);
    
}
