#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution
{
    public:
    int numOfOccurance(vector<int> nums, int k, int targetSum)
    {
        int start = 0, end = 0, sum = 0, count = 0;

        while ( end < nums.size())
        {
            sum += nums[end];

            if( end - start + 1 < k) end++;

            if( end - start + 1 == k)
            {
                if( sum == targetSum) count++;
                sum -= nums[start];
                start++, end++;
            }
        }
        return count;
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

    cout << "Minimum sum subarray is : " <<s.numOfOccurance(vec,k,6);

    return 0;
}