#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution 
{
public:
    bool checkIfPangram(string sentence) 
    {
        vector<int> vec(26, 0);
        for( int i=0; i<sentence.length(); i++)
        {
            vec[sentence[i] - 'a' ]++;
        }
        for( int i=0; i<vec.size(); i++)
        {
            if(vec[i] == 0) return false;
        }
        return true; 
    }
};

int main()
{
    Solution s;
    string str;
    cout << "Enter a string: ";
    getline( cin , str);

    cout << "The given sentence is panagram or not : " <<  s.checkIfPangram(str);
}