#include <stdio.h>

int main() {
    int numbers[5];  
    int i;

    printf("\n Enter 5 numbers:");
    for(i = 0; i < 5; i++) {
        printf("\n Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}
