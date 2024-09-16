#include <stdio.h>
int main() {
    int number, i = 0, even_count = 0, odd_count = 0;

    while (i < 5) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0)
            even_count++;
        else
            odd_count++;

        i++; 
    }

    printf("\nTotal even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);
}