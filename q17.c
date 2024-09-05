#include <stdio.h>

int main() {
    int salary, premium;

    printf("Enter your salary: ");
    scanf("%d", &salary);

    if (salary <= 30000) {
        premium = salary * 0.10;
    } else if (salary <= 60000) {
        premium = salary * 0.15;
    } else {
        premium = salary * 0.20;
    }

    printf("The insurance premium for a salary of %.2d is %.2d\n", salary, premium);
}