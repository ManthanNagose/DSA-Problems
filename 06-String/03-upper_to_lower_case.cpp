#include<iostream>
#include<vector>
using namespace std; 

class Solution 
{
    public: 
    char upperTOLowerCase( char ch)
    {
        if ( ch >= 'A' && ch <= 'Z' )
        {
            return ch + 32;
        }
    }
};

int main()
{
    char ch; 
    cout << "Enter a character: ";
    cin >> ch; 
    Solution s;
    cout << "Lower case character is : " << s.upperTOLowerCase(ch) ;

    return 0; 
}