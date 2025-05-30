#include<iostream>
using namespace std;

class Solution 
{
private:

    int additionOfSquare(int num)
    {
        int rem = 0 , sum = 0 ;
        while( num != 0)
        {
            rem = num % 10;
            sum = sum + (rem * rem);
            num = num / 10 ;
        }
        return sum;
    }
public:
    bool isHappy(int n) 
    {
        int add = additionOfSquare(n);
        if(add == 1)
        {
            return true;
        }
        else if( add < 10 && add != 1)
        {
            return false;
        }
        else
        {
            return isHappy(add);
        }
    }
};

int main()
{
    Solution s;
    int num;
    cout << "Enter a num: ";
    cin >> num;

    cout << "Is your number a happy num: " << s.isHappy(num);
}