#include<iostream>
#include<limits.h>
using namespace std;

const int N = 100;

class Solution
{
    private:
        int arr[N];
        int large, secLarge , thirdLarge;
        int n;

    public:

        void GetSize()
        {
            cout <<"Enter the size of array: ";
            cin >> n;
        }
        void GetArray()
        {
            cout << "Enter the elements in an array: ";
            for(int i=0; i<n; i++)
            {
                cin >> arr[i];
            }
        }

        int Get_Sec_Largest()
        {
            large = INT_MIN;
            secLarge = INT_MIN;
            thirdLarge = INT_MIN;
            for(int i=0; i<n; i++)
            {
                if( arr[i] > large )
                {
                    large = arr[i];
                }
            }

            for(int i=0; i<n; i++)
            {
                if( arr[i] == large )
                {
                    continue;
                }
                else if(arr[i] > secLarge)
                {
                    secLarge = arr[i];
                }
            }

            for(int i=0; i<n; i++)
            {
                if( arr[i] == large)
                {
                    continue;
                }

                else if ( arr[i] == secLarge)
                {
                    continue;
                }

                else if(arr[i] > thirdLarge)
                {
                    thirdLarge = arr[i];
                }
            }
            
            return thirdLarge;
        }

        // int Get_Second_Largest()
        // {
        //     secLarge = INT_MIN;
        //     for(int i=0; i<n; i++)
        //     {
        //         if(arr[i] == large)
        //         {
        //             continue; 
        //         }
        //         else if(arr[i] > secLarge)
        //         {
        //             secLarge = arr[i];
        //         }
        //     }
        //     return secLarge;
        // }

};

int main()
{

    Solution s;
    s.GetSize();
    s.GetArray();
    // cout << "largest element is : " << s.Get_Largest() << endl;
    cout << "third Largest element is : " << s.Get_Sec_Largest() << endl;
}