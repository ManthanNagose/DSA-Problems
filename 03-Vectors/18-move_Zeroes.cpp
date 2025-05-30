#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] != 0) 
            {
                swap(nums[j++], nums[i]);
            }
        }
    }
};

int main()
{
    Solution obj;
    vector<int> vec;
    int n; 
    cout << "Enter the size of vector: ";
    cin >> n;

    vec.resize(n);
    cout << "Enter the elements in a vector: ";
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }
    cout << "After moving zeroes to end : ";
    obj.moveZeroes(vec);
    for(int i=0; i<n; i++)
    {
        cout << vec[i] << " ";
    }
}