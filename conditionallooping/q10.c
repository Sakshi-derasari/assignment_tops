#include <stdio.h>

int main() {
    int num, firstdigit, lastdigit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastdigit = num % 10;

    firstdigit = num;
    while (firstdigit >= 10) {
        firstdigit /= 10;
    }

    sum = firstdigit + lastdigit;

    printf("The sum of the first and last digit is: %d\n", sum);
}