#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            int pos = index[i];
            result.insert(result.begin()+pos,val);
        }       
        return result;
    }
};
int main(int argc, char const *argv[])
{
    return 0;
}