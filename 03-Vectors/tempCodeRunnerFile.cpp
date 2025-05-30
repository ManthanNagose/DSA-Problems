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