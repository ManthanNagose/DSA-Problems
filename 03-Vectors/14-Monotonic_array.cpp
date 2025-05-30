#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:

        bool isMonotonic(vector<int>& nums) 
        {
            int i=0; 
            int count1 = 0, count2 = 0; 
            for( int i=0; i<nums.size()-1; i++)
            {
                if( nums[i] < nums[i+1] )
                    count1 ++;
                else if( nums[i] > nums[i+1] )
                    count2 ++;
                else
                {
                    continue;
                }
            }
            if(count1 == 0 || count2 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    Solution s;
    vector<int> vec;
    int size;

    cout << "Enter the size of array: ";
    cin >> size; 

    vec.resize(size);
    cout << "Enter elements in an array: ";
    for(int i=0; i<vec.size(); i++)
    {
        cin >> vec[i];
    }
    cout << "Is the given array is monotic or not: " << s.isMonotonic(vec);

}