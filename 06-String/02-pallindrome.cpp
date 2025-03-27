#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ;

class Solution 
{
    public:
        bool isPallindrome(string s) 
        {
            int start = 0, end = s.size() - 1;
            while( start <= end )
            {
                if( s[start] != s[end] )
                {
                    return 0;
                }
                else if ( s[start] == s[end] )
                {
                    start ++, end --;
                }
            }
            return 1;
        }
};

int main()
{
    Solution s; 
    string str; 
    cout << "Enter a word: ";
    cin >> str;
    if(s.isPallindrome(str) )
    {
        cout << "Your entered word is pallindrome.";
    }
    else
    {
        cout << "Your entered word is not a pallindrome.";
    }
    
    return 0; 
}