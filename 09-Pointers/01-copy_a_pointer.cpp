#include<iostream>
using namespace std;

int main()
{
    int num = 5;

    int *ptr = &num;
    cout << "Print of address: " <<  ptr <<endl;
    cout << "Value print : " << *ptr << endl;
    num++;
    cout << "Num after increment: " << num << endl;
    (*ptr)++;
    cout << "Value incrementing by pointer: " << *ptr << endl;
    cout << "Are num value and *ptr value same now: " << *ptr << "==" << num << endl << endl;



    // Copying of pointer 
    int n = 10;
    int *p = &n;
    int *q = p;
    cout << "Value of n is : " << n << endl;
    cout << "Address at p: " << p << endl;
    cout << "Address of q: " << q << endl;
    cout << "value at q: " << *q << endl;
    cout << "value at p: " << *p << endl << endl;


    //Important Arithmatic pointer
    int i = 3;
    int *t = &i ; 
    *t = *t + 1; 
    cout << "Value after incrementing t is: " << *t << endl;
    cout << "Address Stored in t, Before incrementing : " << t << endl;  // 104
    t = t + 1;
    cout << "Address Stored in t, after incrementing : " << t << endl;   // 108
    // increment of 4 due to size of value is 4 thet is integer datatype

    return 0;
}