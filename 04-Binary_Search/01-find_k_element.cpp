#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
        vector<int> targetIndices(vector<int> nums, int target) 
        {
            
            vector<int> vec;
            sort(nums.begin(), nums.end());

            int start = 0, mid, end = nums.size();
            
            for(int i=0; i<nums.size(); i++)
            {
                mid = start + ( end - start)/2;

                if( nums[mid] == target)
                {
                    vec.push_back(mid);
                }
                else if( nums[mid] < target )
                {
                    start = start + 1;
                }
                else if( nums[mid] > target)
                {
                    end = mid - 1;
                }
            }
            return vec;
        }
    };

int main()
{
    Solution s; 
    vector<int> nums = {1,2,5,2,3};
    int target = 2;
    vector<int> result = s.targetIndices(nums, target);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}