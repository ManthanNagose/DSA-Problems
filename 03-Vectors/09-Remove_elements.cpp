#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) 
        {
            int count = 0; 
            for(int i=0; i<nums.size(); i++) 
            {
                if( nums[i] == val)
                {
                    nums.erase(nums.begin() + i );
                    count ++;
                }
            }
            return count;
        }
};

int main()
{
    vector<int> vec;
    Solution s; 
    int size , val; 
    cout << "Enter the size of vector: ";
    cin >> size; 
    cout << "Enter the elements in array: ";
    vec.resize(size);
    for(int i=0; i<size; i++)
    {
        cin >> vec[i];
    }
    cout << "Enter value to remove: ";
    cin >> val;
    cout << "Output is : " << s.removeElement(vec, val);
    cout << "\nAfter removing the element the array is : ";
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}