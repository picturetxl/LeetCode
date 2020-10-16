#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    /** @brief 最少时间走完按照给定顺序的点
     * 那如何最少时间走完两个点，
     * 按照规则　一秒钟可以水平或者竖直或者对焦走一个单位
     * 对角走最划算 因为可以水平 和 竖直分别移动一个单位 走的最快
     */
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int result = 0;
        for(int i=1;i<points.size();i++){
            int start_point_x = points[i-1][0];
            int start_point_y = points[i-1][1];

            int end_point_x = points[i][0];
            int end_point_y = points[i][1];

            int distance_x = abs(start_point_x-end_point_x);
            int distance_y = abs(start_point_y-end_point_y);
            if(distance_x < distance_y) {
                result += distance_x;
                result += distance_y - distance_x;
            }
            else{
                result += distance_y;
                result += distance_x - distance_y;
            }
        }
        return result;
        
    }
};
int main(int argc, char const *argv[])
{
    return 0;
}