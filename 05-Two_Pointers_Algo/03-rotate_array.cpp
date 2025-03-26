#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        void rotate(vector<int>& nums, int k) 
        {
            int start = nums[0], end = nums.size() - 1;
            int temp = 0;
            
            for( int i=0; i<nums.size(); i++)
            {
                if ( start == k )
                {
                    break;
                }
                else
                {
                    temp = nums[start];
                    nums[i] = nums[i+1];
                    nums[end] = temp;
                }
            }
        }
};

int main()
{
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7};
    s.rotate(nums, 3);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}