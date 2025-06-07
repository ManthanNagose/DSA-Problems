#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int sum=0;
        double msum=INT_MIN;
        
        for(int right=0; right<nums.size(); right++){
            sum+=nums[right];

            if((right-left+1)>k){
                sum-=nums[left];
                left++;
            }
            if(right-left+1==k){
                if(sum>msum) msum=sum;
            }    
        }
        return msum/k; 
    }
};