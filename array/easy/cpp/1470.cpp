#include <iostream>
#include <vector>
using namespace std;

/** 
 * 一个数组长度是2的倍数,然后分一半 前一半一个 后一半一个 这样添加到result中去 
 */
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int j=n;
        vector<int> result;
        for(int k=0;k<n;k++){
            result.push_back(nums[i]);
            i++;
            result.push_back(nums[j]);
            j++;
        }
        return result;
    }
};
int main(int argc, char const *argv[])
{

    return 0;
}