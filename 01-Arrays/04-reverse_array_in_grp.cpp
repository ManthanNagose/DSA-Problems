#include<iostream>
using namespace std; 

const int N = 100; 

class Solution
{
    private: 
    int arr[N], size, k;

    public: 
        void get_array()
        {
            cout << "Enter the size of array: ";
            cin >> size;

            cout << "Enter the elements in an array : ";

            for ( int i=0; i<size; i++)
            {
                cin >> arr[i];
            }
        }

        void reverse_array(int start , int end)
        {
            for(int i=start; i<end; i++)
            {

            }
        }



        void grp_reversing()
        {
            cout << "Enter the size of grp: ";
            cin >> k;

            for( int i=0; i<size; i++)
            {

            }
        }


        void traverse()
        {
            for(int i=0; i<size; i++)
            {
                cout << arr[i] << " ";
            }
        }
};