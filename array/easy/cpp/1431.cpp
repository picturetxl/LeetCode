#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> kids;
        //* 对于每个孩子计算加上额外糖果的值 看是否是此时糖果中最大的那个 如果是,则true 否则,false
        for(int i=0;i<candies.size();i++){
            int plus_extra = extraCandies+candies[i];
            //* 是否是最大的
            int j=0;
            int max = plus_extra;
            bool flag = false;
            while (j<candies.size())
            {
                if(j!=i){
                    if(max < candies[j]){
                        kids.push_back(false);
                        flag = true;
                        break;
                    }
                }
                j++;
            }
            if(!flag){
                kids.push_back(true);
            } 
        }       
        return kids;
    }
};
int main(int argc, char const *argv[])
{
    
    return 0;
}
