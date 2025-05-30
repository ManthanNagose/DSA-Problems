#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution
{
    private:

    public:
        void revrseWords( vector<char>& s)
        {
            int start = 0; 
            for(int i=0; i<=s.size(); ++i)
            {
                if( i == s.size() || s[i] == ' ')
                {
                    while( start < i-1)
                    {
                        swap( s[start] , s[i-1]);
                        start++, i--;
                    }
                    start = i + 1;
                }
            }
        }
};

int main() 
{
    Solution s;
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);  // Read full line including spaces

    // Convert string to vector<char>
    vector<char> chars(input.begin(), input.end());

    // Reverse each word
    s.revrseWords(chars);

    // Output result
    cout << "Reversed words: ";
    for (char c : chars) 
    {
        cout << c;
    }
    cout << endl;

    return 0;
}