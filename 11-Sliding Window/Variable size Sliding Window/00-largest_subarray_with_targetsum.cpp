#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
    int subarrayWithTargetsum( vector<int> nums, int targetSum )
    {
        int start = 0, sum = 0;
        int maxSize = 0;
        
        for( int end = 0; end< nums.size(); end++)
        {
            int k = targetSum;

            sum += nums[end];
            while( sum > k && start <= end)
            {
                sum -= nums[start];
                start ++;
            }

            if( sum == k )
            {
                maxSize = max(maxSize, end - start + 1);
            }
        }
        return maxSize;
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

    cout <<"Answer is : " << s.subarrayWithTargetsum(vec,k);

    return 0;
}