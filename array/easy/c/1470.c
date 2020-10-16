
#include <stdio.h>
#include <malloc.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* result = malloc(sizeof(int) * numsSize);
    int i = 0;
    int j = n;
    for(int k = 0; k < numsSize;k=k+2){
        result[k] = nums[i];i++;    //* 前半段的坑
        result[k+1] = nums[j];j++;  //* 后半段的坑
        printf("%d%d\n",k,k+1);
    }
    *returnSize = numsSize;
    return result;
}
int main() {
    int nums[6] = {2,5,1,3,4,7};
    int size = 0;
    int *result = shuffle(nums,6,3,&size);
    for (int i = 0; i < 6; i++) {
       printf("%d ",result[i]); 
    }
    printf("\n"); 
}