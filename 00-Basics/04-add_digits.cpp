#include<iostream>
using namespace std;

class Solution 
{       
    public:
    int addDigits(int num) 
    {
        while( num >= 10 )
        {
            int sum = 0, rem = 0;
            while( num != 0)
            {
                rem = num % 10 ;
                sum = sum + rem;
                num = num / 10;
            }
            num = sum;
        }
        return num;
    }
};

int main()
{
    Solution s;
    int num ;
    cout << "Enter the number: ";
    cin >> num;
    // cout << "Number of digits are: " << s.num_of_digits(num) << endl;
    cout << "The single digit number we got : " << s.addDigits(num);
}