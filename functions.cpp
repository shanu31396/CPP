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

inline int productof(int a, int b)
{
    static int c = 0;
    c++;
    return a * b + c;
}

int moneyreceived(int money, float rate  = 1.04){ // default arguments should be in extreme right
    return money * rate;
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

    int c , d;
    cout << "Enter two numbers: ";
    cin >> c >> d;
    cout << "The product of c & d is : "<<productof(c,d)<<endl;
    cout << "The product of c & d is : "<<productof(c,d)<<endl;

    cout << "If you have $1000, you will receive: $"<<moneyreceived(1000)<<endl;
    cout << "If you have $1000, you will receive: $"<<moneyreceived(1000, 1.05)<<endl;



    return 0;
}