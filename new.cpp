// #include <iostream>
// #include <string>
// using namespace std;
// class student
// {
//     string name, roll_no, age;
//     int marks[];

// public:
//     void getdata()
//     {
//         cout << "Enter name: ";
//         getline(cin, name);
//         cout << "Enter roll no: ";
//         cin >> roll_no;
//         cout << "Enter age: ";
//         cin >> age;
//         cout << "Enter marks: ";
//         for (int i = 0; i < 5; i++)
//         {
//             cin >> marks[i];
//         }
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Age: " << age << endl;
//         cout << "Marks: ";
//         for (int i = 0; i < 5; i++)
//         {
//             cout << marks[i] << " ";
//         }
//         cout << endl;
//     }

//     student()
//     {
//         cout << "Default constructor called" << endl;
//     }
//     student(string n, string r, string a, int m[])
//     {
//         name = n;
//         roll_no = r;
//         age = a;
//         for (int i = 0; i < 5; i++)
//         {
//             marks[i] = m[i];
//         }
//         cout << "Parameterized constructor called" << endl;
//     }
// };
// int main()
// {
//     cout << "Constructor called" << endl;
//     // student s1;
//     student s2("John", "123", "20", new int[5]{90, 85, 80, 75, 70});
//     s2.getdata();
//     s2.display();

//     return 0;
// }

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
        cout << "Enter roll no: ";
        cin >> this->roll_no;
        cout << "Enter age: ";
        cin >> this->age;
        cout << "Enter marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> this->marks[i];
        }
    }

    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Roll No: " << this->roll_no << endl;
        cout << "Age: " << this->age << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << this->marks[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    student s1; // object creation
    s1.getdata();
    s1.display();
    return 0;
}
