#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution 
{
public:
    int compress(vector<char> chars) 
    {
        vector<char> ch;
        int j = 0, i=0;
        while( j < chars.size())
        {
            int count = 0;
            while( j < chars.size() && chars[i] == chars[j])
            {
                count ++, j++;
            }
            ch.push_back(chars[i]);

            if ( count > 1)
            {
                string cnt = to_string(count);
                for( char c : cnt)
                {
                    ch.push_back(c);
                }
            }
            i = j;
        }
        return ch.size();
    }
};

int main()
{
    Solution s;
    vector<char> chr;
    int n;
    cout << "Enter size: ";
    cin >> n;

    chr.resize(n);
    cout << "Enter elements in character array: ";
    for( int i=0; i<n; i++)
    {
        cin >> chr[i];
    }

    cout << "Size of new array is : " <<  s.compress(chr);
}