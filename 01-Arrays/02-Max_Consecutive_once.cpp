#include<iostream>
using namespace std;

const int N = 100; 

class Solution 
{
    private: 
        int arr[N], count;
        int size,  x = 0;

    public: 
        Solution()
        {
            count = 0; 
        }

        void get_array ()
        {
            cout << "Enter the Size of an array: ";
            cin >> size;

            cout << "Enter the Zero's amd Once: ";
            for(int i=0; i<size; i++)
            {
                cin >> arr[i];
            } 
        }

        int max_once()
        {
            for(int i=0; i<size; i++)
            {
                if ( arr[i]==1)
                {
                    count++ ;
                }

                if( arr[i] == 0)
                {
                    if( count > x)
                    {
                        x = count; 
                    }
                    count = 0 ;
                }
            }
            return x;
        }

};

int main()
{
    Solution s;
    s.get_array();
    
    cout << "Maximum Number consecutive 1 in the array are: " << s.max_once() ;
}