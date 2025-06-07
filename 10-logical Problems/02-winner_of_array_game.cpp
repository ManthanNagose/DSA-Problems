#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    int getWinner(vector<int>& arr, int k) 
    {
        int i = arr[0];
        int j = arr[1];
        int maxi = 0, count = 0, ans = 0;
        int n = arr.size();

        while( i != n || j != n)
        {
            if( arr[i] > arr[j])
            {
                maxi = arr[i];
                ans  = maxi ;
                j++;
            }
            else if( arr[j] > arr[i] )
            {
                maxi = arr[j];
                ans = maxi;
                i++;
            }

            if ( ans == maxi) count++;
            else 
            {
                count--;
            }
            if ( count == k)
            {
                return maxi ;
            }

        }
    }
};
int main()
{
    Solution s;
    vector<int> vec;
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements in array: ";
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }
    int k;
    cout << "Enter value of k : ";
    cin >> k;
    cout << "The winner is : " << s.getWinner(vec,k);

}