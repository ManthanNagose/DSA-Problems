#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution 
{
public:
    string triangleType(vector<int>& nums) 
    {
        int a,b,c;
        a = nums[0];
        b = nums[1];
        c = nums[2];

        if( a==b && b==c && a==c)
            return "Equilateral Triangle.";
        else if( a==b || b==c || a==c )
            return "Isosceles Triangle.";
        else if( a + b > c || a + c > b || b + c > a)
            return "Scalen Triangle.";
        else
        {
            return "Invalid Triangle.";
        }
    }
};
int main()
{
    Solution s;
    vector<int> vec(3);
    vec.resize(3);
    cout << "Enter sides of triangle: ";
    for(int i=0; i<3; i++)
    {
        cin >> vec[i];
    }
    cout << "The give sides of triangle shows that it is: " << s.triangleType(vec);
}