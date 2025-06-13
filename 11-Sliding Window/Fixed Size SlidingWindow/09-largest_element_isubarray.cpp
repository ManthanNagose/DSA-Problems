#include<iostream>
#include<vector>
#include<deque>
using namespace std;

class Solution
{
    public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        int start = 0, maxi = nums[0];
        int end = 0;
        deque<int> dq;
        vector<int> res;

        while( end < nums.size())
        {
            dq.push_back(nums[end]);
            if( nums[end] > maxi)
            {
                maxi = nums[end];
            }

            if( end-start+1 < k) end ++;
            else if(end-start+1 == k)
            {
                dq.push_back(maxi);
            }
        }
        return dq;
    }

};