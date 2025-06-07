#include<iostream>
#include<string>
using namespace std;
class Solution 
{
public:
    string mergeAlternately(string word1, string word2) 
    {
        string s;
        int i = 0, j = 1;
        int n = words1.length() + words2.length();
        for( int k=0;k<n; k++)
        {
            if( k % 2 == 0)
            {
                s[k] = word1[i];
                i++;
            }
            else
            {
                s[k] = word2[j];
                j++;
            }
        }

        for( char itr : s)
        {
            cout << itr << " ";
        }

        return s ;
    }
};

int main()
{
    Solution s;
    string word1 = "abc";
    string word2 = "pqr";
    cout << "Merged string is : " << s.mergeAlternately(word1, word2);

    return 0;
}