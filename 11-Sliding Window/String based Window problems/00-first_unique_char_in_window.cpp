#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


class Solution
{
    public:
    int getSubstringWithAllUniqueChar(string s, int k)
    {
        int start=0, end=0, count=0;
        unordered_map<char, int> mp;
        while(end < s.length())
        {
            mp[s[end]]++;

            if( end-start+1 < k ) end++;
            else if( end-start+1 == k)
            {
                bool isUnique = true;
                for( auto it : mp)
                {
                    if(it.second > 1) 
                    {
                        isUnique = false;
                        break;
                    }
                }

                if(isUnique) count ++;
                
                mp[s[start]]--;
                if( mp[s[start]] == 0)
                {
                    mp.erase(s[start]);
                }
                start++, end++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    string str = "eceba";
    int k = 2;
    cout << s.getSubstringWithAllUniqueChar(str, k);
}