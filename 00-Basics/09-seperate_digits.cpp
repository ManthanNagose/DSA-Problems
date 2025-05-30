#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
    vector<int> separateDigits(vector<int>& nums) 
    {
        vector<int> result;
        int rem = 0, res = 0, count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            int temp = nums[i];
            while( temp != 0 )
            {
                rem = temp % 10;
                res = res*10 + rem;
                temp = temp / 10;
                count ++;
            }
            
            int ans = 0;
            while( count != 0)
            {
                ans = res % 10;
                result.push_back(ans);
                res = res / 10;
                count --;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> ans;
    int size;
    cout << "Enter size: ";
    cin >> size;

    ans.resize(size);
    cout << "Enter elemenets in a vector: ";
    for( int i=0; i<size; i++)
    {
        cin >> ans[i];
    }

    cout << "The vector before is : ";
    for( int i=0; i<size; i++)
    {
        cout << ans[i];
    }

    s.separateDigits(ans);
}