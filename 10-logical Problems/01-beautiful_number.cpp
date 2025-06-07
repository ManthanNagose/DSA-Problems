#include<iostream>
using namespace std;
class Solution 
{
    public:
    int numberOfBeautifulIntegers(int low, int high, int k) 
    {
        int count = 0;
        int start = 0; 
        while( start == 0)
        {
            if( low % k == 0)
            {
                start = low;
                break;
            }
            low++;
        }
        cout << "Low is : " << low;
        cout << "Start is : " << start;

        for( int i=low; i<high; i=i+k)
        {
            int temp = i;
            int even = 0, odd = 0;
            while (temp != 0) 
            {
                int rem = temp % 10;
                if (rem % 2 == 0) even++;
                else odd++;
                temp /= 10;
            }
            if (even == odd) count++;
        }
        return count;
    }
};
int main()
{
    int x, y , z;
    cout <<"Enter value of low , high and k : ";
    cin >> x>> y>> z;
    Solution s;
    s.numberOfBeautifulIntegers(x,y,z);
}