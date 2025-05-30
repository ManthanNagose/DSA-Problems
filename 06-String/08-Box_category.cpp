#include<iostream>
#include<string>
using namespace std; 

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) 
    {
        int l = length;
        int w = width;
        int h = height; 
        int m = mass;
        int vol = l * w * h;

        if( (l >= 1e4 || w >= 1e4 || h >= 1e4)  || vol >= 1e9 )
        {
            if( m >= 100)
            {
                return "Both";
            }
            else
            {
                return "Bulky";
            }
        }
        else if ( m >= 100 )
        {
            return "Bulky";
        }
        else
        {
            return "Neither";
        }
    }
};
int main()
{
    int l,w,h,m;
    cout << "Enter the values: ";
    cin >> l>>w>>h>>m;
    Solution s;
    cout << "The given box is found to be " << s.categorizeBox(l,w,h,m);
}