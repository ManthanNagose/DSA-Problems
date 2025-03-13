#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        bool containsDuplicate(const vector<int>& nums) 
        {
            int ans= 0;
            for(int num : nums)
            {
                ans = ans ^ num;
            }
            if( ans != 0 )
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    };

int main()
{
    Solution s;
    vector<int> num;

    int n;
    cout <<"Enter the size of vector: ";
    cin >> n;

    num.resize(n);

    cout << "Enter the elements in vector: ";
    for( int &val : num)
    {
        cin >> val;
    }

    cout << "Is Duplicate value present in vector : " << s.containsDuplicate(num);

}