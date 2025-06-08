#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution 
{
    public: 
    int minSubarray(vector<int> nums, int k)
    {
        int i=0, j=0, sum = 0, mini = INT_MAX;
        while ( j < nums.size())
        {
            sum = sum + nums[j];

            if( j-i+1 < k) j++;

            if( j-i+1 == k)
            {
                mini = min(mini, sum);
                sum = sum - nums[i];
                i++;
                j++;
            }
        }
        return mini;
    }
};

int main()
{
    Solution s;
    vector<int> vec;
    int size;
    cout << "Enter size: " ;
    cin >> size;

    vec.resize(size);

    cout << "Enter the elements in an array: ";
    for(int i=0; i<vec.size(); i++)
    {
        cin >> vec[i];
    }

    int k;
    cout << "Enter the size of sub array : " ;
    cin >> k;

    cout << "Minimum sum subarray is : " << s.minSubarray(vec,k);

    return 0;
}