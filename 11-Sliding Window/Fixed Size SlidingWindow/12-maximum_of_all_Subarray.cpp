#include<iostream>
#include<vector>
#include<deque>
#include<limits.h>
using namespace std;

class Solution
{
    public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        int start = 0;
        deque<int> dq;
        vector<int> res;

        for(int end=0; end<nums.size(); end++)
        {
            while( !dq.empty() && nums[dq.back()] < nums[end])
            {
                dq.pop_back();
            }

            dq.push_back(end);

            if( !dq.empty() && dq.front() <= end-k) dq.pop_front();
            
            if( end > k -1)
            {
                res.push_back(nums[dq.front()]);
            }
        }
        return res;
    }
};