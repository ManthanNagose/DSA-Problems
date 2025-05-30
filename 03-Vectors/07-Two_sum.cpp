#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            sort( nums.begin() , nums.end() );
            int start = 0, end = nums.size() - 1;
            vector<int> vec;

            for( int i=0; i<nums.size(); i++ )
            {
                int ans = nums[start] + nums[end];

                if( ans == target)
                {
                    vec.push_back(start);
                    vec.push_back(end);
                }
                else if( ans > )

            } 
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
    cout << "Enter the target: ";
    cin >> x;
    Solution s;
    vector<int> result = s.twoSum(vec, x);
    cout << "The two numbers are: " << result[0] << " " << result[1];

    return 0;
}