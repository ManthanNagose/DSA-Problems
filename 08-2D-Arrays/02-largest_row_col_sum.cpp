#include<iostream>
#include<limits.h>
using namespace std;

class Solution 
{
    public: 
    int largestRowSum(int arr[3][4])
    {
        // Row Wise sum of elements ---->
        int maxi = INT_MIN;
        for( int row=0; row<3; row++)
        {
            int sum = 0 ;
            for(int col=0; col<4; col++)
            {
                sum += arr[row][col];
                if( sum > maxi)
                {
                    maxi = sum;
                }
            }
            cout << "Sum of row " << row + 1 << " is " << sum << endl; 
        }
        // cout << endl;
        return maxi ;
    }

    int largestColSum(int arr[3][4])
    {
        //Column wise sum of elements ----->

        int maxi = INT_MIN;
        for( int col=0; col<4; col++)
        {
            int sum = 0 ;
            for(int row=0; row<3; row++)
            {
                sum += arr[row][col];
                if( sum > maxi)
                {
                    maxi = sum;
                }
            }
            cout << "Sum of col " << col + 1 << " is " << sum << endl;
        }
        // cout << endl;
        return maxi;
    }
};

int main()
{
    Solution s;
    int arr[3][4];
    cout << "Enter the elements in an array : ";
    for( int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Largest row wise element sum is : " << s.largestRowSum(arr) << endl;
    cout << "Largest column wise element sum is : " << s.largestColSum(arr); 
    return 0;
}