#include <iostream>
using namespace std;

class MyClass{
private:
    int data;
public:
    MyClass(int value){ // Constructor to initialize data
        data = value;}
    void setData(int value);
    int getData() {
        return data;}
    void display(){cout << "Data: " << data << endl;}};

void MyClass::setData(int value){
    data = value;} // there is no significance of semicolon here

int main(){
    MyClass obj(10);
    obj.display();
    obj.setData(20);
    obj.display();
    return 0;}