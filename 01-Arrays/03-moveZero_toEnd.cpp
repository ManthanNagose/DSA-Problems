#include<iostream>
using namespace std; 

const int N = 100; 

class Solution
{
        public:
        int arr[N], size, end; 
    
    public:

        void get_array()
        {
            cout << "Enter the size of an array : ";
            cin >> size;

            cout << "Enter the elements in an array : ";
            
            for(int i=0; i<size; i++)
            {
                cin >> arr[i];
            }
        }
        

        void move_zero_to_end()
        {
            int temp; 
            end = size -1;
            for(int i=0; i<size; i++)
            {
                if ( arr[i] == 0)
                {
                    while(end > i && arr[end] == 0 )
                    {
                        end--;
                    }

                    if(arr[end] != 0)
                    {
                        temp = arr[end];
                        arr[end] = arr[i];
                        arr[i] = temp;
                    }
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
    cout << "Your input array is : " ;
    s.traverse_array();
    cout << endl <<  "After Moving all zeros to end: ";
    s.move_zero_to_end();
    cout << "Your output array is: ";
    s.traverse_array();

    return 0; 
}