#include<iostream>
#include<vector>
#include<deque>
using namespace std;

class Solution 
{
    public:
    void negativeInSubarray(vector<int> nums, int k)
    {
        int start = 0, end = 0, ans = 0;
        deque<int> dq;

        while( end < nums.size())
        {

            if ( nums[end] < 0) dq.push_back(end);
            
            if( end - start + 1 < k) end++;

            else if( end - start + 1 == k)
            {
                if( dq.size() != 0)
                {
                    cout << nums[dq.front()] << " ";
                }
                else cout << "0" << " ";

                if( !dq.empty() && start == dq.front() ) dq.pop_front();
                start++, end++;
            }
        }
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

    cout << "Answer is : ";
    s.negativeInSubarray(vec,k);

    return 0;
}