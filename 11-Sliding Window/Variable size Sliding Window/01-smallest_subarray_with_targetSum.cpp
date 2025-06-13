#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int smallSubarrayWithTargetSum(vector<int> nums, int targetSum)
    {
        int start = 0, minSize = nums.size();
        int sum = 0;
        int k = targetSum;
        for( int end = 0; end < nums.size(); end++)
        {
            sum += nums[end];
            while ( sum >= k && start <= end)
            {
                minSize = min( minSize , end-start+1);
                sum -= nums[start];
                start++;
            }
        }
        return minSize;
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

    cout <<"Answer is : " << s.smallSubarrayWithTargetSum(vec,k);

    return 0;
}