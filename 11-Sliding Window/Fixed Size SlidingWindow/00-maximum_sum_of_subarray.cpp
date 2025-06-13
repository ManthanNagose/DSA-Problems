#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
class Solution
{
    public:
    double findMaxSumSubarray(vector<int> nums, int k)
    {
        int i=0, j=0, sum=0, maxi = INT_MIN;
        while( j < nums.size())
        {
            sum += nums[j];
            if( j-i+1 < k )
            {
                j++;
            }
            else if(j-i+1 == k)
            {
                maxi = max(maxi, sum);
                sum -= nums[i];
                i++;
                j++;
            }
        }
        float ans = maxi*1.0 / k;
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> vec = {1,12,-5,-6,50,3};
    cout <<"Answer is : " << s.findMaxSumSubarray(vec, 4);
}