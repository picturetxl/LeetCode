#include <stdio.h>
#include <stdbool.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool isMax(int* candies,int size,int value){
    int max = 0;
    for(int i=0;i<size;i++){
        if(candies[i] > value){
            return false;
        }
    }
    return true;
}
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool* result = (bool*) malloc(sizeof(bool)*candiesSize);
    for (int i = 0; i < candiesSize; i++) {
        int plus_extra = extraCandies + candies[i];
        result[i] = isMax(candies,candiesSize , plus_extra);
    }
    *returnSize = candiesSize;
    return result;
}
