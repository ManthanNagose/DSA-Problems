#include<iostream>
using namespace std;

class Solution 
{
public:
    int divide(int dividend, int divisor) 
    {
        int count = 0, sum = 0, negDiv = 0, posDiv = 0;
        while ( sum < dividend)
        {
            if( divisor < 0)
            {
                divisor *= - 1;
                sum += divisor;
                cout << "Sum is : " << sum << endl;
                if( sum >= dividend) break;
                -- count;
                negDiv ++;
                cout << "Count is : " << count << endl;
            }
            else
            {
                sum += divisor;
                cout << "Sum is : " << sum << endl;
                if( sum >= dividend) break;
                ++ count;
                posDiv ++;
                cout << "Count is : " << count << endl;
            }
        }

        if( negDiv > posDiv)
        {
            count = -abs(count);
        }
        return count;
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