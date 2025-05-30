#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int low = 0, mid = 0, high = n - 1;

        while ( mid <= high)
        {
            if( nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low ++ , mid ++; 
            }
            else if( nums[mid] == 1) 
            {
                mid ++ ;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high -- ;
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> vec;

    int size;
    cout << "Size: ";
    cin >> size;

    vec.resize(size);
    cout << "Enter elements in array: ";
    for(int i=0; i<size; i++)
    {
        cin >> vec[i];
    }

    s.sortColors(vec);

    for( int x : vec)
    {
        cout << vec[x] << " ";
    }
}