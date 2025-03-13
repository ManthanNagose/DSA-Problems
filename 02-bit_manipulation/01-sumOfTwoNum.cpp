#include<iostream>
using namespace std;

class Solution
{
    public:
    int getSum(int a, int b)
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        int ans  = (a|b);

        return  ans;
    }

};

int main()
{
    Solution s;
    cout << "Sum of two numbers are : " <<  s.getSum(2,3);
}
