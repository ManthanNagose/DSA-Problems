#include<iostream>
using namespace std;

const int N = 100; 

class Solution
{
    private: 
        int arr[N], size;
        int leader_element ;

    public: 
        Solution()
        {
            size = 0;
        }

        void get_array()
        {
            cout << "Enter the size of array: ";
            cin >> size;

            for(int i=0; i<size; i++)
            {
                cin >> arr[i];
            }
        }

        void get_leader_element()
        {
            cout << "Leader elements are: ";
            leader_element = arr[size-1];

            for(int j=size-2; j>=0; j-- )
            {

                if( arr[j] > leader_element)
                {
                    leader_element = arr[j];
                    cout << leader_element << " ";
                }

            }
        }
};

int main()
{
    Solution s;
    s.get_array();
    s.get_leader_element();
    
}