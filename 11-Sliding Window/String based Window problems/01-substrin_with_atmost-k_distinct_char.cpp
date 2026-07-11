#include<iostream>
#include<string>
using namespace std;

class Solution 
{
    public:
    int lngstSubstringofk(string s, int k)
    {
        int start = 0, maxlenngth = 0;
        unordered_map<char, int> mp;

        for(int end=0; end<s.length(); end++)
        {
            mp[s[end]]++;
            while(mp.size() > k)
            {
                mp[s[start]]--;
                if(mp[s[start]] == 0)
                {
                    mp.erase(s[start]);
                }
                start ++;
            }
            maxlength = max(maxlength, end-start+1);
        }
        return maxlength;
    }
};