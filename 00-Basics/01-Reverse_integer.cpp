#include<iostream>
#include<climits>
using namespace std;
class Solution 
{
public:
    int reverse(int x) 
    {
        
        int rem , rev_num = 0;

        if( INT_MIN < x && x < INT_MAX )
        {
            while( x != 0)
            {
                rem = x % 10;
                rev_num = rev_num*10 + rem;
                x = x / 10;
            }
        }
        return rev_num;
    }
};