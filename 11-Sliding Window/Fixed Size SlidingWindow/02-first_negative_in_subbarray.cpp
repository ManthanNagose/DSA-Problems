#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution
{
    public:
    vector<int> findMaxOfSubarray(vector<int> nums, int k)
    {
        int i=0, j=0; 
        while( j < nums.size() )
        {
            maxi = max( maxi, nums[j]);
            if( j-i+1 < k) j++;
            
            if( j-k+1 == k) 
            {
                
            }
        }

        
    }
};
