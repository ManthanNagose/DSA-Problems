#include<iostream>
using namespace std;

const int N = 100 ;

class Solution
{
    private:
        int arr[N];
        int size, ans; 
    public: 
        Solution()
        {
            size = 0 ;
            ans = 0; 
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

        int get_unique_element()
        {
            for(int i= 0; i<size; i++)
            {
                ans  = ans ^ arr[i];
            }
            return ans;
        }
};

int main()
{
    Solution s; 
    s.get_array();
    cout << "Your Unique element in list is : " << s.get_unique_element();

}