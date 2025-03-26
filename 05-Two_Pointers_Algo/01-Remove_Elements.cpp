#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) 
        {
            sort( nums.begin(), nums.end() );

            for(int i=0; i<nums.size(); i++) 
            {
                if( nums[i] == val)
                {
                    nums.erase(nums.begin() + i);
                }
            }

            cout<< "Nums are : ";
            
            for(int i=0; i<nums.size(); i++)
            {
                cout <<  nums[i];
            }
            return nums.size() - 1;
        }
};

int main()
{
    int x, size;
    vector<int > vec;

    cout << "Enter size: ";
    cin >> size;

    vec.resize(size);
    cout << "Enter the elements: ";
    for(int i=0; i<size; i++)
    {
        cin >> vec[i];
    }
    cout << "Enter the target value: ";
    cin >> x;

    Solution s;
    cout << "Output : " << s.removeElement(vec, x);

    return 0;
}