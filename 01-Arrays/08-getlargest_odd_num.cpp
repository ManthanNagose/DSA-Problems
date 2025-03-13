#include<iostream>
using namespace std;

class Solution 
{
    private: 
        long long int num, ans;

    public: 

        Solution()
        {
            ans = 0 ;
        }
        void get_num()
        {
            cout << "Enter the number: ";
            cin >> num;
        }

        int get_largest_odd_num()
        {
            while( num != 0)
            {
                if( num % 2 == 0)
                {
                    num = num / 10 ; 
                }
                else
                {
                    return num ;
                }
            }
        }
};

int main()
{
    Solution obj; 
    obj.get_num();
    cout << "Largest odd num is : " << obj.get_largest_odd_num();
}