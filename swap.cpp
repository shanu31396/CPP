#include <iostream>
using namespace std;
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int swapR(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int swapR2(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapR2: a = " << a << ", b = " << b << endl;
}

int &swapRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return b;
}

inline int product(int a, int b)
{
    return a * b;
}
int main()
{
    int a = 1, b = 2;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    swapR(a, b);
    cout << "After swapR: a = " << a << ", b = " << b << endl;
    swapR2(a, b);
    cout << "After swapR2: a = " << a << ", b = " << b << endl;

    swapRef(a, b) = 9;
    cout << "After swapRef: a = " << a << ", b = " << b << endl;

    cout << "The product of a and b is : "<<product(3,4)<<endl;
    return 0;
}