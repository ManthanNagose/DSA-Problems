#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public: 
    bool isPresent(int arr[3][3], int target)
    {
        for( int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                if ( arr[row][col] == target) return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;

    int arr[3][3];
    cout << "Enter elements in an array : ";

    for( int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cin >> arr[row][col];
        }
    }
    
    int target;

    cout << "enter the target element: ";
    cin >> target;
    cout << "Is target element present in array: " << s.isPresent(arr, target);



}