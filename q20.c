#include <stdio.h>

int main() {
    int salary,insurance,loan,inhandsalary;

    printf("Enter your monthly salary: ");
    scanf("%d", &salary);

    insurance = 0.10 * salary;
    loan = 0.10 * salary;

    inhandsalary = salary - insurance - loan;

    printf("Insurance Deduction: %.2d\n", insurance);
    printf("Loan Deduction: %.2d\n", loan);
    printf("Remaining Salary: %.2d\n", inhandsalary);
}