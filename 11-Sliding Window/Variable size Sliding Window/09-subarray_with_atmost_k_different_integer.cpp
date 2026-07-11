#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
    int atMostKDistinct(vector<int>& nums, int k)
    {
        int start=0, count=0, end=0;
        unordered_map<int, int> mp;

        for(int end=0; end<nums.size(); end++)
        {
            mp[nums[end]]++;

            while(mp.size() > k) 
            {
                mp[nums[start]]--;
                if(mp[nums[start]] == 0)
                {
                    mp.erase(nums[start]);
                }
                start++;
                
            }

            if( mp.size() <= k)
            {
                count += end-start+1;
            }

        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        return atMostKDistinct(nums, k) - atMostKDistinct(nums, k - 1);
    }
};