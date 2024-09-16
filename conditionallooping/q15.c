#include <stdio.h>

int main() {
    int i = 0, num, sum = 0;

    while (i < 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        sum += num;
        i++;
    }

    printf("The sum of the 10 numbers is: %d\n", sum);
}