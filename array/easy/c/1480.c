#include <stdio.h>

int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* array = (int*)malloc(sizeof(int)*numsSize);
    int sum = 0;
    for(int i=0;i<numsSize;i++){
        sum += nums[i];     //* 计算前i项和
        array[i] = sum;     //* 赋值保存
    }
    return array;
}