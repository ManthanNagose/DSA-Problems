#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution 
{
public:
    int minElement(vector<int>& nums) 
    {
        vector<int> vec;
        
        for(int i=0; i<nums.size(); i++)
        {
            int sum = 0, rem = 0;
            int temp = nums[i];
            while(temp != 0 )
            {
                rem = temp % 10;
                sum = sum + rem;
                temp /= 10;
            }
            
            cout << "Sum is : " << sum << endl;
            vec.push_back(sum);
        }

        for(int i=0; i<vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl; 



        int mini = INT_MAX;
        int temp;
        for( int i=0; i<vec.size(); i++)
        {
            if( vec[i] < mini)
            {
                mini = vec[i];
            }
        }
        return mini;
    }
};
int main()
{
    Solution s;
    vector<int> arr;
    int size;

    cout << "Enter size: ";
    cin >> size;

    arr.resize(size);
    cout << "Enter elements in a vector: ";
    for( int i=0 ; i< arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Minimum element after sum is : " << s.minElement(arr);
}