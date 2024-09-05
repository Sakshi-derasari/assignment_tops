#include <stdio.h>

int main() {
    int a, b, temp;

    // Input from user
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Display original values
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

      // Swap without using a third variable
    a = a + b;  // Step 1: a now contains the sum of a and b
    b = a - b;  // Step 2: b now contains the original value of a
    a = a - b;  // Step 3: a now contains the original value of b

    // Display swapped values
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

}