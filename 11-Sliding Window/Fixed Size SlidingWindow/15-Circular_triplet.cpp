#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int getAlternateTriplet(vector<int> nums )
    {
        int count=0; 
        int left=0, right=0;

        for(int i=0; i<nums.size(); i++)
        {
            left = (i-1+nums.size()) % nums.size();
            right = (i+1) % nums.size();

            if( nums[left] == nums[right] && nums[i] != nums[left]) count++;
        }
        return count;
    }
};

int main() 
{
    Solution s;
    vector<int> colors = {0, 1, 0, 1, 1};
    cout << s.getAlternateTriplet(colors) << endl;  // Expected Output: 2
    return 0;
}