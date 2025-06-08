#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int findSubarrayWithOnlyEven(vector<int> nums, int k)
    {
        int start = 0, end = 0, count = 0, ans = 0;

        while( end < nums.size() )
        {
            if( nums[end] % 2 == 0)
            {
                count ++;
            }

            if( end -start + 1 < k) end++;
            else if( end - start + 1 == k )
            {
                if( count == k) ans ++;

                if( nums[start] % 2 == 0) count --;
                start++, end++;
                
            }
            
        }
        return ans;
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

    cout << "Minimum sum subarray is : " << s.findSubarrayWithOnlyEven(vec,k);

    return 0;
}