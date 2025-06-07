#include<iostream>
using namespace std;

class Solution 
{
    public:
        int numberOfSteps(int num) 
        {
            int count = 0;
            while ( num != 0 )
            {
                if(num % 2 == 0)
                {
                    num /= 2;
                }
                else
                {
                    num -= 1;
                }
                cout << "Number is : " << num << endl;
                count++;
                cout << "Number of steps are : " << count << endl;
            }
            return count;
        }
};

int main()
{
    Solution s;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of steps required are : " << s.numberOfSteps(n);

    return 0;
}