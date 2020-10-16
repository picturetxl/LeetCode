#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /** 找对数 看一个数组里面有多少对相同的数
     */
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) 
        {
            for(int j=i+1;j<nums.size();++j){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count; 
    }
};
int main(int argc, char const *argv[])
{
    return 0;
}