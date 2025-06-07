#include<iostream>
using namespace std;
class Solution 
{
    public:
        int numWaterBottles(int numBottles, int numExchange) 
        {
            int temp = numBottles;
            // cout << "Number of Bottle at initial are : "<< numBottles << endl;
            while ( numBottles >= numExchange)
            {
                int q = numBottles / numExchange;
                // cout << "Quotent is : " << q << endl;
                int rem = numBottles % numExchange;
                // cout << "Remainder is : " << rem << endl;
                temp = temp + q;
                // cout << "Temp value: " << temp << endl;
                numBottles = q + rem;
                // cout << "Number of Bottles are : " << numBottles << endl;
            }
            return temp;
        }
};

int main()
{
    Solution s;
    int x,y;
    cout << "Enter the number of bottles and exchange bottles: ";
    cin >> x >> y;
    cout << "Number of bottles he can drink are : " << s.numWaterBottles(x,y);
}