//
//  main.c
//  learnPointer
//
//  Created by 孙傲 on 2023/4/4.
//

#include <stdio.h>
#include <math.h>

int main() {
//    inr arrSize = arr.size();
    int arr[]  = {4,1,3,2,5,2,4};
    int len = 7;
    if (len == 0)return 0;
    int left = 0, right = len - 1;
    int leftMax = 0, rightMax = 0, res = 0;
    while(left < right) {
        if (arr[left] < arr[right]) {
            leftMax = fmax(leftMax, arr[left]);
            res += leftMax - arr[left];
            left ++;
        } else {
            rightMax = fmax(rightMax, arr[right]);
            res += rightMax - arr[right];
            right --;
        }
    }
    return res;
}
