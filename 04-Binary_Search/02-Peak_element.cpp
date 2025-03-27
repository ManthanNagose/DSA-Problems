#include<iostream>
using namespace std; 

class Solution 
{
    public: 
        int peak_Element(int arr[], int size )
        {
            int start = 0; 
            int end = size - 1 ; 
            while ( start <= end )
            {
                int mid = start + ( end - start) / 2;

                if( ( mid ==0 || arr[mid- 1] <= arr[mid]) && ( mid == size -1 || arr[mid] >= arr[mid+1]) )
                {
                    return arr[mid];
                }

                if( mid < size - 1 && arr[mid] < arr[mid + 1] )
                {
                    start = mid + 1; 
                }
                else
                {
                    end = mid - 1;
                }
            
                return -1;
            }
        }
};
int main()
{
    Solution s; 
    int size;
    cout<<"Enter the size of the array: ";
    cin>> size; 
    int arr[size];
    cout << "Enter the velues in an array: ";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "Your Peak element is : " << s.peak_Element(arr, size) ;

}