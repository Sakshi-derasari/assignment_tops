#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    printf("Size of the first number: %d bytes\n", sizeof(num1));
    printf("Size of the second number: %d bytes\n", sizeof(num2));
    printf("Size of the sum: %d bytes\n", sizeof(sum));
}