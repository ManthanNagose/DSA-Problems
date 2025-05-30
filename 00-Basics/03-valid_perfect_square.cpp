#include<iostream>//2,147,483,647
#include<limits.h>
using namespace std;

class Solution 
{
public:
    bool isPerfectSquare(int num) 
    {
        long long ans ;
        for( int i=0; i<=INT_MAX; i++)
        {
            ans = 1ll*i*i;
            if( ans == num)
            {
                return true;
            }
            else if( ans != num && ans > num)
            {
                return false;
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    int num; 
    cout << "Enter a num: ";
    cin >> num; 
    cout << "is nums a perfect square : " << s.isPerfectSquare(num);

}