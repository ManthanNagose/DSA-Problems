#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution 
{
    public:
    int maxSumWithOneoddNum(vector<int> nums, int k)
    {
        int start = 0, end = 0,sum = 0, ans = 0, maxi = INT_MIN;
        int count = 0;

        while( end < nums.size() )
        {

            sum += nums[end];

            if( nums[end] % 2 != 0  ) 
            {
                count ++;
            }
            
            
            if( end - start +1  < k) end ++;
            else if( end-start+1 == k)
            {
                if(count <=1 ) maxi = max( maxi, sum);

                if( nums[start] % 2 != 0) count --;
                sum -= nums[start];
                count --;
                start++, end++;
            }

        }
        return maxi;
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

    cout << "Minimum sum subarray is : " << s.maxSumWithOneoddNum(vec,k);

    return 0;
}