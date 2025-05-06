#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int *ptr = &a;

    cout << "The value of a is :" << a << endl;
    cout << "The address of a is :" << &a << endl;
    cout << "The address of a is :" << ptr << endl;
    cout << "The value of a is :" << *ptr << endl;
    *ptr = 2; // i.e. a = 2;
    cout << "The value of a is :" << a << endl;

    int *p = new int(10);
    cout << "The value of p is :" << *p << endl;
    cout << "The address of p is :" << p << endl;
    delete p;

    p = nullptr; // Avoid dangling pointer
    cout << "The value of p is :" << p << endl; // p is now a null pointer

    int **c = &ptr; // pointer to pointer
    cout << "The address of c is : "<<c<<endl; // address of ptr
    cout << "The value of c is : "<<*c<<endl; // address of a
    cout << "The value of c is : "<<**c<<endl; // value of a
    cout << "The address of c is : " <<&ptr << endl; // address of ptr
    return 0;
}