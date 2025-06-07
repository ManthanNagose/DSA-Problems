#include<iostream>
using namespace std;
class Solution 
{
    public:
        int maxBottlesDrunk(int numBottles, int numExchange) 
        {
            int temp = numBottles;
            cout << "Temp : " << temp << endl << endl;

            while( temp >= numExchange )
            {
                temp = temp - numExchange;
                cout << "Temp Value inside loop is : " << temp << endl;
                temp += 1;
                numExchange += 1;
                cout << "Exchange bottles inside loop is : " << numExchange << endl;
                numBottles += 1;
                cout << "Num bottles inside loop is : " << numBottles << endl<< endl;
            }
            return numBottles;
        }
};
int main()
{
    Solution s;
    int numBottles = 10;
    int numExchange = 3;
    cout << "Answer is : " << s.maxBottlesDrunk(numBottles, numExchange);
}