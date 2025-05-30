#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    int fib(int n) 
    {
        vector <int> vec;
        
        if( n == 1) return 0;
        else if ( n == 2) return 1;
        else if( n > 2)
        {
            int count = 0; 
            int i=0;
            vec.push_back(0);
            vec.push_back(1);
            while ( count != n)
            {

            }
        }
        return vec[i];
    }
};
int main()
{
    Solution s;
    cout << "Fibonacii series is: "<<  s.fib(4);
}