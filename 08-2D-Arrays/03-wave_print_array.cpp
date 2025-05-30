#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
    vector<int> getAnswer( vector<vector<int>> arr, int nRows, int nCol )
    {
        vector<int> vec;
        for(int col=0; col<nCol; col++)
        {
            if( col%2 != 0)
            {
                for( int row = nRows - 1; row >= 0; row--)
                {
                    vec.push_back(arr[row][col]);
                }
            }
            else
            {
                for( int row = 0; row < nRows; row++ )
                {
                    vec.push_back(arr[row][col]);
                }
            }
        }
        return vec;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix(3, vector<int>(4));
    cout << "Enter the elements in an array : ";
    for( int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin >> matrix[row][col];
        }
    }

    for( int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "After converting wave form the vector is : ";
    vector<int> wave = s.getAnswer(matrix, 3, 4);
    for (int val : wave)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}