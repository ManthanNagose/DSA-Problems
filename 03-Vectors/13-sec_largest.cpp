#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    
    public: 
        int get_sec_largest( vector<int> vec, int n )
        {
            int largest = -1, temp = 0;
            int sec_largest;

            for( int i=0; i<n; i++)
            {
                if( vec[i] > largest)
                {
                    sec_largest = largest ;
                    largest = vec[i];
                }
            }
            return sec_largest;
        }
};

int main()
{
    Solution obj;
    vector<int> vec;
    int size;

    cout << "Enter the vector size: ";
    cin >> size;

    cout << "Enter elements in a vector: "; 

    vec.resize(size);
    for(int i=0; i<size; i++)
    {
        cin >> vec[i];
    }
    cout << "Second largest element is : " << obj.get_sec_largest(vec, size) ;

    return 0;
}