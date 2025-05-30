#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> vec(2);
        int start = 0, end = numbers.size() - 1;
        while( start < end)
        {
            if( ( numbers[start] + numbers[end] ) > target ) end --;
            else if( ( numbers[start] + numbers[end] ) < target ) start ++;
            else
            {
                vec[0] = start + 1;
                vec[1] = end + 1;
                break;
            }
        }
        return vec;  
    }
};

int main()
{
    Solution s;
    vector<int> vec;
    int n, target;
    cout << "Enter size: " ;
    cin >> n;

    vec.resize(n);
    cout << "Enter elements in an array: ";
    for( int i=0; i<vec.size(); i++)
    {
        cin >> vec[i];
    }

    cout << "Enter target element to sum up: ";
    cin >> target;

    vector<int> ans = s.twoSum(vec, target );;
    for( int x : ans)
    {
        cout << x << " ";
    }
}