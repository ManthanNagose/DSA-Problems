#include<iostream>
#include<vector>
#include<deque>
using namespace std;

class Solution
{
    public:
    vector<int> getfirstPositiveOfSubarray(vector<int> nums, int k)
    {
        int start= 0, end=0; 
        deque<int> dq;
        vector<int> res;
        while( end < nums.size() )
        {
            if(nums[end] > 0) 
            {
                dq.push_back(end);
            }

            if( end-start+1 < k) end++;
            else if( end-start+1 == k)
            {
                if(!dq.empty())
                {
                    res.push_back(nums[dq.front()]);
                }
                else
                {
                    res.push_back(0);
                }

                if( !dq.empty() && dq.front() == start) dq.pop_front();
                start++;
                end++;
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> vec;
    int size;
    cout << "Enter size: " ;
    cin >> size;

    vec.resize(size);

    cout << "Enter the elements in an array: ";
    for(int i=0; i<vec.size(); i++)
    {
        cin >> vec[i];
    }

    int k;
    cout << "Enter the size of sub array : " ;
    cin >> k;

    cout << "Answer is : " ;
    vector<int> result = s.getfirstPositiveOfSubarray(vec,k);
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}