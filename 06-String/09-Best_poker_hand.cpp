#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) 
    {

        int arr[14] = {0};

        for( int i=0; i<ranks.size(); i++)
        {
            arr[ranks[i]] += 1;
        }

        int maxFreq = 0;
        for (int i = 1; i <= 13; ++i) 
        {
            maxFreq = max(maxFreq, arr[i]);
        }

        unordered_map<char, int> s;
        for(char count : suits)
        {
            s[count]++;
        }

        for (auto& pair : s) 
        {
            if (pair.second == suits.size()) 
            {
                return "Flush";
            }
        }
        
        if(maxFreq >= 3)
        {
            return "Three of a Kind";
        }
        else if( maxFreq == 2 )
        {
            return "Pair";
        }
        else
        {
            return "High Card";
        }

    }
};