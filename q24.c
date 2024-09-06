#include <stdio.h>

#define NUM_EMPLOYEES 5

int main() {
    char names[NUM_EMPLOYEES][50]; // Array to store employee names
    int salaries[NUM_EMPLOYEES]; // Array to store employee salaries
    int totalSalary = 0;
    int averageSalary = 0;

    for(int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%d", &salaries[i]);

        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / NUM_EMPLOYEES;

    printf("\nTotal Salary: %d\n", totalSalary);
    printf("Average Salary: %d\n", averageSalary);
}