#include <iostream>
#include <vector>
using namespace std;
/** @brief 在一个数组中,当前的值在数组中有多少小于该值的数
 */ 
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int count =0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            result.push_back(count);
        }    
        return result;
    }
};
int main(int argc, char const *argv[])
{
    return 0;
}