#include<iostream>
using namespace std;

const int N = 100; 

class Solution
{
    private: 
        int arr[N], size;
        int temp;

    public: 
        Solution(int size)
        {
            this->size = size; 
        }

        void get_array()
        {
            cout << "Enter the elements in an array: ";

            for(int i=0; i<size; i++)
            {
                cin >> arr[i];
            }
        }

        void shifting()
        {
            temp = arr[0];
            for( int j=1; j<size; j++)
            {
                arr[j-1] = arr[j];
            }
            arr[size - 1] = temp;
        }

        void rotate_array()
        {
            int k, s, temp;

            cout << "Enter the positions to rotate: ";
            cin >> k;

            s = ( k % size );  // s is the index which is   --- size < rotating positon

            for(int k=0; k<s; k++)
            {
                shifting();
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

int main()
{
    int size; 
    cout << "Enter the size of an array: ";
    cin >> size;
    
    Solution s(size);
    s.get_array();
    s.rotate_array();
    s.traverse();
}