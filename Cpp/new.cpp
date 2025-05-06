#include <iostream>
#include <string>
using namespace std;

class student
{
    string name, roll_no, age;
    int marks[5];

public:
    void getdata()
    {
        cin.ignore(); // clear buffer before getline
        cout << "Enter name: ";
        getline(cin, this->name); // using this
        cout << this << endl;
        cout << "Enter roll no: ";
        cin >> this->roll_no;
        cout << this << endl;
        cout << "Enter age: ";
        cin >> this->age;
        cout << this << endl;
        cout << "Enter marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> this->marks[i];
            cout << this << endl;
        }
    }

    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << this << endl;
        cout << "Roll No: " << this->roll_no << endl;
        cout << this << endl;
        cout << "Age: " << this->age << endl;
        cout << this << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << this->marks[i] << " ";
            cout << this << endl;
        }
        cout << endl;
    }
    student()
    {
        cout << "Default constructor called" << endl;
    }
    student(string n, string r, string a, const int m[5])
    {
        name = n;
        roll_no = r;
        age = a;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
        cout << "Parameterized constructor called" << endl;
    }
};

int main()
{

    cout << "Constructor called" << endl;
    student s1;
    s1.getdata();
    s1.display();
    int marks[] = {90, 85, 80, 75, 70};
    student s2("John", "123", "20", marks);
    s2.display();
    return 0;
}
