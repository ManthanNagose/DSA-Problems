#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int longestSubarrayWithSum(vector<int> nums, int targetSum)
    {
        int start = 0, maxlen = 0, end = 0;
        int sum = 0;
        for(int end = 0; end < nums.size(); end++)
        {
            sum += nums[end];

            while( sum > targetSum)
            {
                sum -= nums[start];
                start ++;
            }

            maxlen = max(maxlen, end-start+1);
            
        }
        return maxlen;
    }
};
int main()
{
    Solution s;
    vector<int> vec;
    int n,k;

    cout << "Entre size: ";
    cin >> n;

    cout << "Enter value of target sum: ";
    cin >> k;

    vec.resize(n);
    cout << "Enter the elements in vector: " ;
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }

    cout <<"Answer is : " << s.longestSubarrayWithSum(vec,k);

    return 0;
}