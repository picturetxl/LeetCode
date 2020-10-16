#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int result = 0;
        for(int i=0;i<arr.size();i++){
           for(int j=i+1;j<arr.size();j++){
               for(int k=j+1;k<arr.size();k++){
                   if(abs(arr[i]-arr[j])<=a and abs(arr[j]-arr[k])<=b and abs(arr[k]-arr[i])<=c){
                       result++;
                   }
               }
           } 
        }       
        return result;
    }
};
int main(int argc, char const *argv[])
{
    return 0;
}