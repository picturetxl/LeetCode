#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /** 数组前i个数累加存储
     */
    vector<int> runningSum(vector<int>& nums) {
       int size = nums.size();
       int sum = 0;
       vector<int> result;
       for(int i=0;i<size;i++){
           sum += nums[i];
           result.push_back(sum);
       } 
       return result;
    }
};


int main(int argc, char const *argv[])
{
    
    return 0;
}
