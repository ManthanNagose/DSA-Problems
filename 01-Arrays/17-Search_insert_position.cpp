#include<iostream>
#include<array>
#include<vector>
using namespace std;

class Solution {
    public:
        int searchInsert(const vector<int>& nums, int target) 
        {
            int mid, start=0, end = nums.size() - 1;
            
            while(start <= end)
            {
                mid = start + (end - start)/2 ;
                
                if( target == nums[mid])
                    return mid;
                else if(  target > nums[mid])
                    start = mid + 1;
                else 
                    end = mid - 1;
            }
            return start;
        }
    };

int main()
{
    Solution s;
    vector<int> num = {1, 3, 5, 6};
    int target;

    cout << "Enter the target value : ";
    cin >> target;

    cout << "The element must be in the position: " << s.searchInsert(num, target);   
}