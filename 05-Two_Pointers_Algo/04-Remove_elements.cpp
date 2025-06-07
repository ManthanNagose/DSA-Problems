 // problem no : 27

#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int count = 0;
        int j = nums.size() - 1;
        int i = 0;
        while ( i <= j)
        {
            if( nums[j] == val) j--, count++;
            else if( nums[i] == val && nums[j] != val)
            {
                swap(nums[i], nums[j]);
                i++, count++;
                j--;
            }
            else
            {
                i++;
            }
        }
        return (nums.size() - count);
    }
};
int main()
{
    Solution s;
    vector<int> vec = { 2, 3, 4, 5 ,2, 0, 6, 8, 5, 8, 0, 0, 0, 0, 2, 3, 5, 3, 3, 2, 2, 2, 2, 7, 8};

    int value;
    cout << "Enter val: ";
    cin >> value;
    cout << "Orignal vector length: " << vec.size() << endl;
    cout << "Total remaining value : " << s.removeElement(vec, value);
}