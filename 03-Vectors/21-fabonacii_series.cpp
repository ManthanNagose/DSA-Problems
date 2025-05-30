#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    int fib(int n) 
    {
        if( n < 2) return n;

        vector<int> vec(40);
        vec[0] = 0;
        vec[1] = 1;

        for(int i=2; i<n; i++)
        {
            vec[i] = vec[i-1] + vec[i-2];
        }
        return vec[n];
    }
};