#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("You entered the following numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: %d\n",i, numbers[i]);
    }
}
