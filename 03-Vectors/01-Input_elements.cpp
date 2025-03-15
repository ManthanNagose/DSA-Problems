#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:

        vector<int> get_elements()
        {
            vector<int> nums;
            cout << "Enter elements in a vector: ";
            vector<int>::iterator it;
            for( it = nums.begin(); it != nums.end(); it++)
            {
                cin >> *(it);
            }
            return nums;
        }

        vector<int> get_numbers()
        {
            vector<int> vec;
            cout << "Enter the numbers and foe ending please enter 0: ";
            for(int i=0; i != (vec[i]==0); i++)
            {
                cin >> vec[i];
            }
            return vec;
        }
};

int main()
{
    Solution s;
    s.get_elements();
    

}