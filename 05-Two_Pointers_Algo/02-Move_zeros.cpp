#include<iostream>
#include<vector>
using namespace std; 

class Solution 
{
    public:
        void moveZeroes(vector<int>& nums) 
        {
            int start = 0, end = nums.size() - 1; 
            int temp; 

            // if( nums[start] == 0 && nums[end] != 0)
            // {
            //     for( int i=start; i<nums.size(); i++)
            //     {
            //         temp = nums[start];
            //         nums[i] = nums[i+1]; 
            //         nums[end] = temp;
            //     }
            // }
            // else if( nums[start] != 0 && nums[end] == 0)
            // {
            //     start ++ , end -- ;
            // }

            for( int i=0; i<nums[end]; i++)
            {
                if( nums[start] == 0 && nums[end] != 0)
                {
                    temp = nums[i];
                    nums[i] = nums[i+1];
                    nums[end] = temp;
                }
                else if( nums[start] != 0 )
                {
                    start ++ ;
                }
                else if( nums[end] == 0)
                {
                    end --;
                }
            }
        }
};

int main()
{
    Solution s; 
    vector<int> nums = {0,1,0,3,12};
    s.moveZeroes(nums);
    for(int i=0; i<nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
