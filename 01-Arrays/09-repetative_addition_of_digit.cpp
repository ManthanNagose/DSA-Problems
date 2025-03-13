#include<iostream>
using namespace std; 

class Solution 
{
    private: 
        int ans, rem;

    public :

        Solution()
        {
            rem = 0;
        }

        int repetative_addition(int num)
        {
            int ans = 0;

            while ( num != 0)
            {
                rem = num % 10 ;
                ans = ans + rem ;
                num = num / 10 ; 
            }

            if ( ans > 9)
            {
               return repetative_addition(ans);
            }
            else 
            {
                return ans;
            }
        }
};

int main()
{
    int num ;
    cout << "Enter the number: ";
    cin >> num;

    Solution obj; 
    cout << "The repetative sum of digits are: " << obj.repetative_addition(num );

    return 0; 
}