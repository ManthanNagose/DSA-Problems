#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        int missingNumber(vector<int>& nums) 
        {
            int i=0, xor1=0, xor2=0; 

            for(int i=0; i<= nums.size(); i++)
            {
                xor1 = xor1 ^ i;
            }

            for( auto& element : nums ) 
            {
                xor2 = xor2 ^ element;
            }

            return ( xor1 ^ xor2 ) ;
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
    cout << "Enter the elements in vector: ";
    for(int i=0; i<size; i++)
    {
        cin >> vec[i];
    }

    cout << "The missing Element in vector is : " << s.missingNumber(vec);

}