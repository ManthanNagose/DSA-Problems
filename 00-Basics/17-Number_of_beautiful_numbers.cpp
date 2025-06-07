#include<iostream>
using namespace std;

class Solution {
public:
    int numberOfBeautifulIntegers(int low, int high, int k) 
    {
        int count = 0;
        for (int i = low; i <= high; i++) 
        {
            if (i % k == 0) 
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
        }
        return count;
    }
};
int main()
{
    Solution s;
    int low, high, k ;
    cout << "Enter low , high and k : ";
    cin >> low >> high >> k ;
    cout << "Number of beautiful numbers are : " << s.numberOfBeautifulIntegers(low,high,k);
    return 0;
}