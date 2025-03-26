#include<iostream>
#include<vector>
#include<limits.h>
using namespace std; 

class Solution 
{
    public:
        bool isPalindrome(int x) 
        {
            int answer = x;
            if( x >= 0)
            {
                int ans1 = 0; 
                while( x != 0 )
                {
                    int rem = x % 10;
                    ans1 = (ans1*10) + rem;
                    x = x / 10;
                }
                cout << "ans1 is = " << ans1 << endl;

                if( ans1 > INT_MAX || ans1 < INT_MIN )
                {
                    return 0;
                }
                else if( ans1 == answer )
                {
                    return 1; 
                }   
                else
                {
                    return 0; 
                }
            }
            else
            {
                return 0;
            }

        }
};
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Solution s;

    cout << "Asa answer bhetat ahe bapu tuza : " << s.isPalindrome(num) << endl;
    if(s.isPalindrome(num) == 1)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "Number is not palindrome. ";
    }
}