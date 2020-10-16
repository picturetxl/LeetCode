#include <iostream>
#include <vector>
#include <string>

using namespace std;
/**
 * 数组的转置
 * 就是将原数组的每一列的数push到新数组的每一行
 */
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int rows = A.size();
        int cols = A[0].size();
        vector<vector<int>> result(cols);
        for(int i=0;i<cols;i++){
            for(int j=0;j<rows;j++){
                result[i].push_back(A[j][i]);
            }
        }
        return result;
    }
};
int main(int argc, char const *argv[])
{
   Solution solution;
   vector<vector<int>> input{{1,2,3},{4,5,6},{7,8,9}};
   solution.transpose(input);
   return 0;
}
