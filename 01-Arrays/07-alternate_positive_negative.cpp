#include<iostream>
using namespace std;

const int N = 100; 

class Solution
{
    private:
        int arr[N];
        int size;

    public:
        Solution()
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
                cin >> arr[i];
            }
        }

        void get_alternate_positive_negative()
        {
            int temp = 0;
            for(int i=0; i<size; i++)
            {
                for(int j=1; j<size; j=j+2)
                {
                    if ( arr[i] < 0)
                    {
                        temp = arr[i];
                        arr[i] = arr[j] ;
                        arr[j] = temp ;
                    }
                }
            }
        }

        void traverse_array()
        {
            cout << "Your array is : ";
            for(int i=0; i<size; i++)
            {
                cout << arr[i] << " ";
            }
        }

};

int main()
{
    Solution obj;
    obj.get_array();
    obj.get_alternate_positive_negative();
    obj.traverse_array();
}