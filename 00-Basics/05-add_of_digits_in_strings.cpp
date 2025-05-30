#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution 
{
    public:
        int getLucky(string s, int k ) 
        {
            // converting string to a number 
            string str;
            for( char ch : s)
            {
                int x = 1 + ( ch - 'a' );
                str += to_string(x);
            }

            //storing a large number to a vector
            vector<int> result;
            for (char ch : str) 
            {
                if (ch >= '0' && ch <= '9') 
                {
                    result.push_back(ch - '0');  
                }
            }

            // for k = 1 we get addition of all digits 
            int sum=0;
            for(int i=0; i<result.size(); i++)
            {
                sum += result[i];
            } 


            //addition of digits wrt k
            for (int i = 1; i < k; i++)
            {
                int newSum = 0;
                while (sum > 0)
                {
                    newSum += sum % 10;
                    sum /= 10;
                }
                sum = newSum;
            }
            return sum;
        }
};

int main()
{
    Solution s;
    string str;
    int k;

    cout << "Enter the string : ";
    cin >> str; 

    cout <<"Write the number of iterations: ";
    cin >> k;

    cout << "Your value string is : " << s.getLucky(str, k);
}