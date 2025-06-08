#include<iostream>
#include<vector>
using namespace std;

// class Solution 
// {
// private: 
//     int checkDigits(int n)
//     {
//         int rem = 0, digits = 0;
//         while( n != 0)
//         {
//             rem = n % 10;
//             digits++;
//             n /= 10;
//         }
//         return digits;
//     }
// public:
//     int numberOfBeautifulIntegers(int low, int high, int k) 
//     {
//         int start = 0, count = 0; 
//         int i=low; 

//         //Find the starting point which is divisible by k 
//         while( i % k != 0)
//         {
//             i++;
//         }


//         if( i % k == 0) start = i;
//         // cout << "Start is : " << start << endl;

//         int n=0, even, odd, rem = 0;

//         // Starting iterating values from start to high which is divisible by k
//         for(int j=start; j<high; j += k)
//         {
//             cout << "Value of j is : " << j << endl;
//             n = checkDigits(j);
//             // cout << "Number of digits are : " << n << endl;



//             //check the Number of digits is divisible by 2 or not
//             if( n % 2 == 0)
//             {
//                 even = 0, odd = 0;
//                 cout << "J value before perfom is : " << j << endl;
//                 // Check the digits are even or odd
//                 while( j !=0)
//                 {
//                     rem = j % 10;
//                     cout << "Value of Reminder is : " << rem << endl;
//                     if(rem % 2 == 0)
//                     {
//                         even++;
//                         cout << "Even value is : " << even << endl;
//                     }
//                     else
//                     {
//                         odd ++;
//                         cout << "Odd value is : " << odd << endl;
//                     }
//                     j /= 10;
//                 }
//             }
//             else
//             {
//                 continue;
//             }

//             if( even == odd && (j % k == 0)) 
//             {
//                 cout << "Answer we got is : " << j << endl;
//                 count ++;
//                 cout << "Count value : " << count << endl << endl;
//             }
//             cout << endl;
//         }
//         return count;
//     }
// };














































class Solution 
{
private:

    int checkDigits(int n)
    {
        int rem = 0, count = 0;
        while (n != 0) 
        {
            rem = n % 10;
            count++;
            n /= 10;
        }
        return count;
    }

    void countEvenOddDigits(int num, int &even, int &odd)
    {
        while (num > 0)
        {
            int digit = num % 10;
            if (digit % 2 == 0)
            {
                even++;
                // cout << "Even digit is : " << even << endl;

            }
            else
            {
                odd++;
                // cout << "odd digit is : " << odd << endl;
            }
            num /= 10;
        }
    }

public:
    int numberOfBeautifulIntegers(int low, int high, int k) 
    {
        int count = 0, n = 0;

        // start la k n divisible honare number pasun start kel
        int start = (low % k == 0) ? low : (low + k - low % k);

        // k che divisible wale numbers sathi loop
        for (int j = start; j <= high; j += k)
        {
            int even = 0, odd = 0;

            n = checkDigits(j);
            if( n % 2 == 0)
            {
                // cout << "Value of j is : " << j << endl;
                // Count even and odd digits in j
                countEvenOddDigits(j, even, odd);
            }
            else
            {
                continue;
            }

            // If even and odd counts are equal, we have found a "beautiful" number
            if (even == odd) 
            {
                count++;
                // cout << "Value of Count is : " << count << endl;
            }
            // cout << endl;
        }

        return count;
    }
};

int main()
{
    Solution s;
    cout << "Answer is : " << s.numberOfBeautifulIntegers(1, 100, 3);
}