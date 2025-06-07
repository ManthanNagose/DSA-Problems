#include<iostream>
#include<limits.h>
using namespace std;

class Solution 
{
    public:
        int divide(int dividend, int divisor)
        {
            int sign = 1;
            long long sum = 0, count = 0;
            if( dividend < 0  || divisor < 0) sign = -1;
            if( dividend < 0  && divisor < 0) sign = 1;
            if( dividend < 0) dividend = 1ll*dividend*-1;
            if( divisor < 0) divisor *= 1ll*divisor*-1;

            while ( sum < dividend)
            {
                sum += divisor; 
                if( sum > dividend) break; 
                count ++; 
            }

            if( sign < 0) count  =  -abs(count);

            if( count > INT_MAX) return INT_MAX;
            if( count < INT_MIN) return INT_MIN;
            
            return count ;
        }
};


int main()
{
    Solution s;
    int m , n;
    cout << "Enter two numbers : ";
    cin >> m >> n;
    cout << "Answer is : " << s.divide(m,n);
}