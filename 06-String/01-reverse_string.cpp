#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ; 

class Solution 
{
    public:
        void reverseString(vector<char>& s) 
        {
            int start = 0; 
            int end = s.size() - 1; 
            while( start < end )
            {
                swap( s[start], s[end] );
                start++ , end --;
            }
        }
};

int main()
{
    Solution s; 
    vector<char> v = {'h','e','l','l','o'};
    s.reverseString(v);
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

}