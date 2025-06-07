#include<iostream>
using namespace std;

int main()
{
    int size,ans=0;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements in an array: ";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    cout << "Addition of all numbers are : ";
    for(int i=0; i<size; i++)
    {
        ans |= arr[i];
    }
    cout << ans;
}