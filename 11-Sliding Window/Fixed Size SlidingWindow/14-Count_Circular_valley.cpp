#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
    int getValley(vector<int> nums)
    {
        int count=0;
        int left = 0, right=0;

        for(int i=0; i<nums.size(); i++)
        {
            left = (i-1+nums.size()) % nums.size();
            right = (i+1) % nums.size();

            if(nums[left] > nums[i] && nums[right] > nums[i]) count++;
        }
        return count;
    }
};


int main() 
{
    Solution s;

    vector<int> nums = {3, 4, 2, 1, 5};
    cout << s.getValley(nums) << endl;  // Output: 2
    return 0;
}