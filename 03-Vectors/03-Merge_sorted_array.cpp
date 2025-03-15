#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:

        void get_elements(vector<int>& vec1, int m, vector<int>& vec2, int n )
        {
            vec2.resize(n); 
            vec1.resize(m); 

            cout << "Enter the elements in vector 1: ";
            for(int i=0; i<m; i++)
            {
                cin >> vec1[i]; 
            }

            cout << "Enter the elements in vector 2: ";
            for(int i=0; i<n; i++)
            {
                cin >> vec2[i]; 
            }
        }

        void merge( vector<int>& nums1, int m,  vector<int>& nums2, int n) 
        {
            nums1.resize(m+n);

            for(int i=0; i<n; i++)
            {
                nums1[m + i] = nums2[i];
            }

            sort( nums1.begin(), nums1.end() );

            for(auto & element : nums1)
            {
                cout << element << " ";
            }

        }

    };

int main()
{
    Solution s;
    int m, n;
    vector<int> nums1;
    vector<int> nums2;
    cout << "Enter the size of vector 1 and vector 2: ";
    cin >> m >> n;
    s.get_elements(nums1, m, nums2, n);

    cout <<"Getting the merge sorted array is : " ; 
    s.merge(nums1, m, nums2, n);
    
}


// for(int i=0; i<m+n; i++)
//             {
//                 for(int j=m-1; j<n; j++)
//                 {
//                     (nums1.swap(nums2));
//                 }
//             }