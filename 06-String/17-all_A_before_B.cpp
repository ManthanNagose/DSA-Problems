#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution 
{
public:
    bool checkString(string s) 
    {
       int i=0; 
       while ( i<s.length() && s[i] != 'b')
       {
            i++;
       }
       if ( s[i]  == 'b')
       {
            for(int j=i; j<s.length(); j++)
            {
                if( s[j] == 'a') return false;
            }
       }
       return true;
    }
};

int main()
{
    Solution s;
    string str = "bbba";
    cout << "Your Answer is : " << s.checkString(str);
}
