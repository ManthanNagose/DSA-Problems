#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
    int findMin(vector<int> nums, int k)
    {
        int start = 0, maxi = 0 ;
        unordered_map<int ,int> freq;

        for(int end=0; end < nums.size(); end++)
        {
            while( freq.size() > k)
            {
                freq[nums[start]]--;

                if (freq[start] == 0)
                {
                    freq.erase(nums[start]);
                }
                start ++;
            }

            if( freq.size() == k)
            {
                maxi = max(maxi, end-start+1);
            }
        }
        return maxi;
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

    cout <<"Answer is : " << s.findMin(vec,k);

    return 0;
}