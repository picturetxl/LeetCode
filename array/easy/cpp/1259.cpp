#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /** @brief 数组中每个数包含几个数字 如果包含偶数个数字 则统计
     */
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int i=0;i<nums.size();i++){
            int value = nums[i];
           if(to_string(value).size()%2==0){
               result++;
           }
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> input{12,345,2,6,7896};
    Solution solution;
    cout<<solution.findNumbers(input)<<endl;
    return 0;
}