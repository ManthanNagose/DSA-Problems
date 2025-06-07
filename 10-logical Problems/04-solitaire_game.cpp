#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int maximumScore(int a, int b, int c) 
    {
        vector<int> vec = {a, b, c};
        long long count = 0;

        while (true) {
            sort(vec.begin(), vec.end());

            if (vec[1] == 0 || vec[2] == 0) break;

            vec[1]--;
            vec[2]--;
            count++;  
        }
        return count;
    }
};

int main() {
    Solution s;
    int x = 2, y = 4, z = 6;
    cout << "Answer is : " << s.maximumScore(x, y, z);  
}
