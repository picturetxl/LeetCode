#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /** @brief 一个数组的值的存放规则是一对一对的 其中这一对的第一个数是个数 第二个数是值 即这个值有多少个
     */
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i+=2){
            int fred = nums[i];
            int val = nums[i+1];
            for(int k=0;k<fred;k++){
                result.push_back(val);
            }
        }
        return result;
    }
};
int main(int argc, char const *argv[])
{
    return 0;
}