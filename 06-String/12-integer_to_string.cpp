#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    int myAtoi(string s) 
    {
        int ans = 0;
        vector<char> vec ;
        for( char ch : s)
        {
            if( ch == ' ') vec.push_back(ch);
            else if( ch == '-' || ch == '+' ) vec.push_back(ch);
            else if( (ch >='a' && ch <='z') || (ch >= 'A' && ch <= 'Z' ) ) return ans;
            else if( ch >= '0' && ch <= '9') ans = ans * 10 + ( ch -  '0');
        }
        for(char c : vec)
        {
            if ( c == '-' ) ans =  ans*(-1);
            else if ( c == '+' ) ans = ans ;
            else if ( c == ' ' ) continue ;
        }
        return ans;
    }
};