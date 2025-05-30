#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    int findMaxK(vector<int>& nums) 
    {
        sort( nums.begin(), nums.end());
        int start =0, end = nums.size() - 1;
        while( start < end)
        {
            int ans = nums[start] + nums[end];
            if(ans > 0) end --;
            else if( ans < 0 ) start ++;
            else
            {
                return nums[end];
            }
        }
        return -1;
    }
};