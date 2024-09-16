#include <stdio.h>
int main() {
    int n, totalsum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int innerSum = 0;

        for (int j = 1; j <= i; j++) {
            innerSum += j;
        }
        totalsum += innerSum;
    }
    printf("The sum of the series is: %d\n", totalsum);
}
