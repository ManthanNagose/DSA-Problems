#include<iostream>
#include<string>
#include<map>
using namespace std;

class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        map<char, int> freq1;
        map<char, int> freq2;
        
        for( char ch1 : s)
        {
            freq1[ch1]++;
        }

        for(char ch2 : t)
        {
            freq2[ch2]++;
        }

        return ( freq1 == freq2);
    }
};

int main()
{
    Solution obj;
    string s,t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    cout << "Input strings are anagram or not : " ;
    if (obj.isAnagram(s, t)) {
        cout << "Yes, they are anagrams." << endl;
    } else {
        cout << "No, they are not anagrams." << endl;
    }

    return 0;

}