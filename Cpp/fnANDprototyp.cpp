#include <iostream>
using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);
int main(){
    cout<<"Enter value 1 : ";
    int a;
    cin>>a;
    cout<<"Enter value 2 : ";
    int b;
    cin>>b;
    cout << "Enter value 3 : ";
    int c;
    cin>>c;
    cout << "Sum of " << a << " and " << b << " is: " << sum(a,b) << endl;
    sum(a,b,c);
    return 0;
}

int sum(int a, int b){
    int c = a +b;
    return c;
}

int sum(int a, int b, int c){
    int d = a + b + c;
    cout<< "Sum of " << a << ", " << b << " and " << c << " is: " << d << endl;
    return 0;
}