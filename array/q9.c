#include <stdio.h>
#include <string.h>

// Define a structure
struct EmployeeStruct {
    int empno;
    char empname[50];
    float salary;
};

// Define a union
union EmployeeUnion {
    int empno;
    char empname[50];
    float salary;
};

int main() {
    // Using a structure
    struct EmployeeStruct empStruct;
    empStruct.empno = 101;
    strcpy(empStruct.empname, "John Doe");
    empStruct.salary = 50000.0;

    printf("Structure Example:\n");
    printf("Employee Number: %d\n", empStruct.empno);
    printf("Employee Name: %s\n", empStruct.empname);
    printf("Employee Salary: %.2f\n", empStruct.salary);

    // Using a union
    union EmployeeUnion empUnion;
    empUnion.empno = 102;
    printf("\nUnion Example (only empno is valid):\n");
    printf("Employee Number: %d\n", empUnion.empno);
    
    strcpy(empUnion.empname, "Jane Doe");
    printf("Employee Name: %s\n", empUnion.empname);

    empUnion.salary = 60000.0;
    printf("Employee Salary: %.2f\n", empUnion.salary);

    // Check what happens to empno and empname after assigning salary in the union
    printf("\nUnion after modifying salary:\n");
    printf("Employee Number (overwritten): %d\n", empUnion.empno);  // Value corrupted
    printf("Employee Name (overwritten): %s\n", empUnion.empname);  // Value corrupted
}