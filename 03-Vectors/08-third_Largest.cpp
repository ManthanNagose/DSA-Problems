#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution 
{
    public:
        int thirdMax(vector<int>& nums) 
        {
            sort( nums.begin(), nums.end() ) ;
            int largest = nums[nums.size() - 1 ] ;
            int slargest , tlargest ;
            int i = nums.size() - 2;
            while( i != 0) 
            {
                if(nums[i] == largest)
                    i--;
                else
                {
                    slargest = nums[i];
                }

                if(nums[i] == slargest)
                    i--;
                else
                {
                    tlargest = nums[i];
                } 
                i--;
            }
            return tlargest;
        }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 2, 3, 1};
    cout << s.thirdMax(nums) << endl;

    return 0;
}