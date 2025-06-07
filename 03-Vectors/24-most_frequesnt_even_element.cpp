#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] % 2 == 0) mp[nums[i]]++;
        }
    }
};
