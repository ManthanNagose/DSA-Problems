#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) 
        {
                long long rem=0, ans=0; 
                for(int i=0; i<digits.size(); i++)
                {
                    ans = ans*10 + digits[i];
                }
                ans = ans + 1;
                int n = (log10(ans) + 1);
                digits.resize(n);
                for(int i=n-1; i>=0; i--)
                {
                    rem = ans % 10;
                    digits[i] = rem;
                    ans = ans / 10;
                }
                return digits;
        }
    };

int main()
{
    Solution s;
    int size;
    vector<int> vec;
    cout<<"Enter the size of the vector: ";
    cin>>size;
    vec.resize(size);
    cout<<"Enter the elements of the vector: ";
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
    }
    vec = s.plusOne(vec);
    cout<<"The vector after incrementing by 1 is: ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}