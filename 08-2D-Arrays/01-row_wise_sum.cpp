#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public: 
    void rowAndColWiseSum(int arr[3][4])
    {

        //Printing of Elements ----->
        cout << "Elements in a vector is: " << endl;
        for( int row=0; row<3; row++)
        {
            for(int col=0; col<4; col++)
            {
                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
        cout << endl;

        // Row Wise sum of elements ---->
        for( int row=0; row<3; row++)
        {
            int sum = 0 ;
            for(int col=0; col<4; col++)
            {
                sum += arr[row][col];
            }
            cout << "Sum of row " << row + 1 << " is " << sum << endl;
        }
        cout << endl;

        //Column wise sum of elements ----->
        for( int col=0; col<4; col++)
        {
            int sum = 0 ;
            for(int row=0; row<3; row++)
            {
                sum += arr[row][col];
            }
            cout << "Sum of col " << col + 1 << " is " << sum << endl;
        }
        cout << endl;

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
    s.rowAndColWiseSum(arr);
    return 0;
}