#include<iostream>
using namespace std;

class Solution 
{
    public:
    int countEven(int num) 
    {   
        int count= 0; 
        for( int i=1; i<= num; i++)
        {
            int rem = 0, sum = 0;
            int temp = i;
            while( temp != 0)
            {
                rem = temp % 10 ;
                sum = sum + rem;
                temp = temp / 10;
            }
            if( sum % 2 == 0)
            {
                count ++;
            }
        } 
        return count;
    }
};

int main()
{
    Solution s;
    cout << " The answer is: " << s.countEven(30);
}