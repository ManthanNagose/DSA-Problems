#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int maximumCount(const vector<int>& nums) 
        {
            int count1 = 0, count2 = 0;
            for(int val : nums)
            {
                if( val > 0)
                    count1++;
                else if( val < 0)
                    count2++;
            }
            return max(count1 , count2);
        }
    };

int main()
{
    Solution s;
    int n; 
    cout << "Enter the size of vector: ";
    cin >> n;

    vector <int> vec(n);
    cout << "Enter elements in vector: ";

    for( int i=0; i<n; i++)
    {
        cin >> vec[i];
    }
    cout << "The maximum of positive and negative numbers is : " << s.maximumCount(vec);
}