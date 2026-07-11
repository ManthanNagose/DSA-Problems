#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int start=0, count = 0, maxlength = 0;
        unordered_map<char, int> mp;

        for(int end=0; end<s.length(); end++)
        {
            mp[s[end]]++;

            while(mp[s[end]] > 1)
            {
                mp[s[start]]--;
                start ++;
            }

            maxlength = max(maxlength, end-start+1);

        }
        return maxlength;
    }
};
