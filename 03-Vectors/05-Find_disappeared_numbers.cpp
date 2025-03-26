#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) 
        {
            int xor1=0, xor2=0;
            for(int i=1; i<=nums.size(); i++)
            {
                xor1 = xor1 ^ i;
            }

            for( auto val : nums)
            {
                xor2 = xor2 ^ val;
            }
            return {xor1^xor2};
        }
    };

int main()
{
    Solution s;
    int size; 
    vector<int> vec;

    cout << "Enter the size of vector: ";
    cin >> size; 

    vec.resize(size);
    cout << "Enter the elements in a vector: ";
    for(int i=0; i<size; i++)
    {
        cin >> vec[i];
    }

    cout << "Your Output is: " ;
    s.findDisappearedNumbers(vec);
}
