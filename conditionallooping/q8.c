#include <stdio.h>

int main() {
    int n, i, num, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    }


    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);
}
