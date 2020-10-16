#include <iostream>
#include <vector>
using namespace std;
/** @brief 一个数组,长度是2的倍数,这个数组前一半1...n 后一半 1...n 
 *         结果数组为前一半添一个,后一半添一个
 */
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;    //* 前一半开始的index
        int j=n;    //* 后一半开始的index
        vector<int> result;
        for(int k = 0;k < n; k++,i++,j++) {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {

    return 0;
}