#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        int temp;
        int start = 0, end = nums.size() - 1;
        int count = 0;

        while( count < k)
        {
            temp = nums[end];
            for( int i=end -1; i>= start; i--)
            {
                nums[i+1] = nums[i];
            }
            nums[start] = temp;
            count ++;
        }
    }
};

int main()
{
    Solution s;
    vector<int> vec;
    int size, k;
    cout << "Enter size : ";
    cin >> size;

    cout << "Enter value to rotate: ";
    cin >> k;

    vec.resize(size);
    cout << "Enter elements in an array: ";
    for( int i=0; i<size; i++)
    {
        cin >> vec[i];
    }

    s.rotate(vec, k);

}