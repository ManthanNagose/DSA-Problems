#include<iostream>
#include<vector>
#include<algorithm>
#include<cfloat>
using namespace std;

class Solution 
{
public:
    double minimumAverage(vector<int>& nums) 
    {
        sort( nums.begin(), nums.end() );

        int mini =0;
        int maxi = nums.size() - 1;
        double min = DBL_MAX;
        while(mini < maxi )
        {
            double avg = (nums[mini] + nums[maxi])/2.0;
            cout << "Average is : " << avg << endl;
            if( avg < min )
            {
                min = avg;
            }
            mini ++ , maxi -- ;
        }
        
        return min;
    }
};

int main()
{
    Solution s;
    vector<int> vec;
    int n;
    cout << "Enter even size: " ;
    cin >> n;

    vec.resize(n);
    cout << "Enter negative and positive elements in array: ";
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }
    cout << "Min of averages is : " << s.minimumAverage(vec);
}