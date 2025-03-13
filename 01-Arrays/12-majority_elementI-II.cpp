#include<iostream>
using namespace std;

const int N = 100; 

class Solution
{
    private: 
        int arr[N], size;

    public:
        Solution ()
        {
            size = 0; 
        }

        void get_array()
        {
            cout << "Enter the size of array: ";
            cin >> size;
            cout << "Enter the elements in an array: ";
            for(int i=0; i<size; i++)
            {
                cin >> arr[i] ;
            }
        }

        void get_majority_element()
        {
            int i, j;
            int count = 1;

            for(int i=0; i<size-1; i++)
            {
                for(int j=1; j<size; j++)
                {
                    if(arr[i] == arr[j] )
                    {
                        count ++;
                    }       
                }

                if(count > size / 3)
                {
                    
                }
            }
        }
};

int main()
{
    Solution s; 
    s.get_array();
    s.get_majority_element();

}