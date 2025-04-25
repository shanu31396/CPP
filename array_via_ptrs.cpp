#include <iostream>
using namespace std;

int main() {
    int marks[5] = {85, 90, 78, 88, 92};
    int* ptr = marks;
    cout << "Marks of students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    cout << "Marks of students using pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    return 0;
}
