#include<iostream>
#include<vector>
#include<string>
using namespace std; 

class Solution 
{
    private:
        bool check_Caharcter( char ch)
        {
            if( (ch >= 'A' && ch <= 'Z') || ( ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') )
            {
                return 1;
            }
            else 
            {
                return 0; 
            }
        }

        char convert_to_Lower_case( char ch )
        {
            if( ( ch >= 'a' && ch <= 'z' ) || ( ch >= '0' && ch <= '9' ) )
            {
                return ch; 
            }

            return ch + 32;
        }

        bool check_pallindrome( string str )
        {
            int start = 0 ; 
            int end = str.length() - 1; 
            while( start <= end )
            {
                if( str[start] != str[end] )
                {
                    return 0; 
                }
                else
                {
                    start ++ , end --;
                }
            }
            return 1;
        }
    public:
        bool isPalindrome(string s) 
        {
            cout << "Orignal string is : " << s << endl;
            string temp; 
            for( int i=0; i<s.length() ; i++)
            {
                if(  check_Caharcter( s[i] )  )
                {
                    temp.push_back(s[i]);
                }
            }
            cout << "After removing character: "<< temp << endl;

            for( int i=0; i<temp.length(); i++)
            {
                temp[i] = convert_to_Lower_case( temp[i] );
            }
            cout <<"After converting to lower case: "<< temp;

            return check_pallindrome( temp );
        }
};

int main()
{
    Solution s;
    string str; 
    str = "A man, a plan, a canal: Panama";
    cout << s.isPalindrome(str) << endl;

    return 0; 
}