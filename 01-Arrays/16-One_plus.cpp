#include<iostream>
#include<math.h>
using namespace std;

class Solution 
{
    public:
        int arr[100],size;
        void get_array()
        {
            cout <<"Enter size: ";
            cin >> size;
            cout << "Enter the elements: ";
            for(int i=0; i<size; i++)
            {
                cin >> arr[i];
            }
        }

        void get_answer()
        {
            int rem=0, ans=0; 
            for(int i=0; i<size; i++)
            {
                ans = ans*10 + arr[i];
            }
            ans = ans + 1;
            int n = (log10(ans) + 1);
            for(int j=n-1; j>=0; j--)
            {
                rem = ans % 10;
                arr[j] = rem;
                ans = ans / 10;
            }
            for(int i=0; i<n; i++)
            {
                cout << arr[i]  << " ";
            }

        }

};

int main()
{
    Solution s;
    s.get_array();
    cout<<"Your New Arary is: ";
    s.get_answer();
}