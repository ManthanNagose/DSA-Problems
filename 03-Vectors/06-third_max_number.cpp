#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) 
        {
            int xor1 = 0, xor2 = 0;
            for(int i=1; i<nums.size(); i++)
            {
                xor1 = xor1 ^ i;
            }

            for(int i=0; i<nums.size(); i++)
            {
                xor2 = xor2 ^ nums[i]; 
            }
            vector<int> vec = { xor1 ^ xor2 };
            return vec;
        }
    };

int main()
{
    Solution s; 
    vector<int> vec;
    int size; 
    cout << "Enter size: ";
    cin >> size;
    cout << "Enter elements : ";
    for(int i=0; i<size; i++)
    {
        cin >> vec[i];
    }
    vector<int> result = s.findDisappearedNumbers(vec);
    cout << "Disappeared numbers are: ";
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << " ";
    }
}