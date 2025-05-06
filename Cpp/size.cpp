#include <iostream>
using namespace std;

int main(){
    
    typedef struct employee{
        int id;
        char name[20];
        float salary;
    } emp;

    typedef union employee_union{
        int id;
        char name[20];
        float salary;
    } emp_union;

    typedef enum employee_enum{
        MANAGER,
        ENGINEER,
        INTERN,
        HR,
        SALES,
        MARKETING,
        FINANCE,
        IT,
        ADMIN,
        SUPPORT    } emp_enum;

    cout << "Size of struct employee: " << sizeof(emp) << endl; // 24 bytes (due to padding)
    cout << "Size of union employee_union: " << sizeof(emp_union) << endl; // 20 bytes (largest member size)
    cout << "Size of enum employee_enum: " << sizeof(emp_enum) << endl; // 4 bytes (size of int)
    return 0;
}