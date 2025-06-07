#include<iostream>
using namespace std;
class Solution 
{
    public:
        int countOperations(int num1, int num2) 
        {
            int count = 0;
            while( num1 != 0 && num2 != 0 )
            {
                if ( num1 >= num2)
                {
                    num1 = num1 - num2;
                }
                else
                {
                    num2 = num2 - num1;
                }
                count ++;
            }
            return count;
        }
};

int main()
{
    Solution s;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "NUmber of steps required are : " << s.countOperations(num1, num2);
}