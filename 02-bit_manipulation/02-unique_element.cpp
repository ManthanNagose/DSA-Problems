#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) 
        {
            int xor1 = 0;
            for( auto& val : arr)
            {
                xor1 = xor1 ^ val;
            }
            if( xor1 != 0)
                return true;
        }
    };

int main()
{
    Solution s; 
    int size;
    vector<int> vec;
    vec.resize(size);

    cout << "Enter size of vector: ";
    cin >> size;
    cout << "Enter the elements in a vector: ";
    for(int i=0; i<size; i++ )
    {
        cin >> vec[i] ;
    }
    cout << "Is Unique element is present in vector : " << s.uniqueOccurrences(vec);
}