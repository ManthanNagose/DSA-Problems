#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution 
{
    public:
    double avgSumOfSubarray(vector<int> nums, int k)
    {
        int start = 0, end = 0, sum = 0;
        int maxi = INT_MIN;

        while( end < nums.size() )
        {
            sum = sum + nums[end];

            if( end - start + 1 < k) end++;

            if( end - start + 1 == k)
            {
                maxi = max(maxi, sum );
                sum -= nums[start];
                start++, end++;
            }
        }
        return (double) maxi  / k ;
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

    cout << "Minimum sum subarray is : " << s.avgSumOfSubarray(vec,k);

    return 0;
}