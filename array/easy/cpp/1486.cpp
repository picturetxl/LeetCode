#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /** @brief Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.
     * 然后每个值进行XOR 操作
     */
    int xorOperation(int n, int start) {
        int result=0;
        vector<int> values;
        for(int i=0;i<n;i++){
            values.push_back(start+2*i);
        }
        result = values[0];
        for(int i=1;i<n;i++){
            result ^= values[i];
        }
        return result;
    }
};
int main(int argc, char const *argv[])
{
    Solution solution;
    cout<<solution.xorOperation(5,0)<<endl;
    return 0;
}