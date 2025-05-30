#include<iostream>
#include<limits.h>
using namespace std;

class Solution 
{
public:
    int reverse(int x) 
    {
        long long int rev_num = 0, rem  = 0;
        while ( x != 0 )
        {
            int rem = x % 10;
            rev_num = (1ll* 10 * rev_num) + rem;
            x = x / 10;
        }
        if( rev_num < INT_MIN || rev_num > INT_MAX) return 0;
        return rev_num;
    }
};

int main()
{
    Solution s;
    cout << "Reverse Number is: " << s.reverse(1534236469);

    return 0;
}