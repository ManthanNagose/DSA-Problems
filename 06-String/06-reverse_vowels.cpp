#include<iostream>
#include<string>
using namespace std;

class Solution 
{
private:
    char vowels[5] = {'a' , 'e' , 'i', 'o' , 'u'};
public:
    string reverseVowels(string s) 
    {
        int start = 0; 
        int end = s.size() - 1;

        while(start <= end)
        {
            if( s[start] == vowels && s[end] == vowels)
            {
                swap(s[start], s[end]);
            }
            else if(s[start] == vowels && s[end] != vowels )
            {
                end--;
            }
            else if(s[start] != vowels && s[end] == vowels )
            {
                start++;
            }
            else
            {
                start++, end--;
            }
        }
    }
};