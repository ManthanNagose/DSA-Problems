#include<iostream>
using namespace std;

const int N = 100;

class Solution
{
    private: 
        int arr[N], size; 
        int count;

    public: 
        Solution ()
        {
            size = 0; 
            count = 0; 
        }

        void get_array()
        {
            cout << "Enter the size of array: ";
            cin >> size; 
            cout << "Enter elements in an array: ";

            for(int i=0; i<size; i++)
            {
                cin >> arr[i] ;
            }
        }

        int get_majority_element()
        {
            int i,j;
            for( i=0; i<size-1; i++)
            {
                for( j=i+1; j<size; j++)
                {
                    if(arr[i] == arr[j] )
                    {
                        count ++ ;
                    }
                }
            }

            if( count > size/2 )
            {
                return arr[i] ;
            }
            else
            {
                return -1;
            }
        }
};

int main()
{
    Solution s; 
    s.get_array();
    cout << "Majority element is: " << s.get_majority_element();
}