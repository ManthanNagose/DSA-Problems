#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "Num is : " << num << endl;    // num = 5

    int *ptr = &num ;    // value at addreesss of p is = 5
    cout << "Value at p is : " << *ptr << endl; // * ptr = 5

    num ++ ;
    cout << "On Incrementing num is : " << num << endl;    // num = 6
    cout << "After updation of num , value of *ptr is : " << *ptr << endl;  // *ptr = 6

    cout << "Address of num is : " << ptr << endl;   // if will give adress not a value at adress




    cout << "Size of integer num is " << sizeof(num) << endl;
    cout << "Size of integer pointer is " << sizeof(ptr) << endl << endl;

    double pi = 3.14;
    double *p = &pi;

    cout << "Value at address p is : " << *p << endl;
    cout << "Address of pi is : " << p << endl;
    cout << "Size of double pi is : " << sizeof(pi) << endl;
    cout << "Size of double pointer is: " << sizeof(p) << endl;


    //Float pointer

    double val = 10.202;
    double  *f = &val;
    (*f)++; 
    cout << "Value of f is : " << *f << endl;

    return 0;

}