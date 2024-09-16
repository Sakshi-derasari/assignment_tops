#include <stdio.h>

int main() {
    int n, term = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("%d ", term);

    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            term *= 2; // Multiply by 2 for even positions
        } else {
            term *= 3; // Multiply by 3 for odd positions
        }
        printf("%d ", term);
    }
    printf("\n");
}