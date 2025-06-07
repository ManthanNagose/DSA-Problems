#include<iostream>
using namespace std;

int main()
{
    // int arr[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1, };

    // cout << "Address of 1st memory loc is ---> arr : " << arr << endl;
    // cout << "Address of 1st memory block is ---> &arr[0] : " << &arr[0] << endl; 
    // cout << "Value at 0th index ---> *arr : " << *arr << endl;            // value at zeroth index
    // cout << "Value of ---> *arr + 1 : " << *arr + 1 << endl;     // value at 0th index plus 1
    // cout << "Value of ----> *(arr + 1): " << *(arr + 1);

    int arr[10];
    int *ptr = &arr[0];
    cout << "Size of arr: " << sizeof(arr) << endl;
    cout << "Size of ptr: " << sizeof(ptr) << endl;
    cout << "Size of address of arr: " << sizeof(&arr) << endl;

    return 0;
}