#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += mat[i][i]; //* 正对角线
            sum+=mat[i][n-i-1]; //* 副对角线
        }
        if(n%2==0){//* n为偶数矩阵，中心值没有被加两次
            return sum;
        }
        return sum-mat[n/2][n/2];
    }
};
int main(int argc, char const *argv[])
{
    return 0;
}