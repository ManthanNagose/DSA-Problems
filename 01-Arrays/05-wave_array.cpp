#include<iostream>
using namespace std ;

const int N = 100;

class Solution 
{
    private: 
        int arr[N], size; 

    public: 
        void get_array()
        {
            cout << "Enter the soize of array: ";
            cin >> size; 

            cout << "Enter the elements in an array: ";
            for(int i=0; i<size; i++)
            {
                cin >> arr[i];
            }
        }

        void wave_array()
        {
            int temp;
            int temp1;
            for(int i=1; i<size; i=i+2)
            {
                if( arr[i-1] <= arr[i] )
                {
                    temp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = temp;
                }

                if(arr[i] > arr[i+1] && i < size-1)
                {
                    temp1 = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp1;
                }
            }
        }

        void traverse_array()
        {
            for(int i=0; i<size; i++)
            {
                cout << arr[i] << " ";
            }
        }
};

int main()
{
    Solution s;
    s.get_array();
    s.wave_array();
    cout << "Your output array is : ";
    s.traverse_array();

    return 0;
}
