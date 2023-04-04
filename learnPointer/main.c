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
    // 1025 = 00000000 00000000 00000100 00000001
    int* p;
    p = &a;
    printf("size of integer is %d \n", sizeof(int));
    printf("Address of p is %d, value = %d \n", p, *p);
    printf("Address of p+1 is %d, value = %d \n", p+1, *(p+1));
    
    char* p0;
    p0 = (char*)p; // typecasting
    printf("size of char is %d \n", sizeof(char));
    printf("Address of p0 is %d, value = %d \n", p0, *p0);
    printf("Address of p0+1 is %d, value = %d \n", p0+1, *(p0+1));
    
}
