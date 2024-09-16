#include <stdio.h>

int Palindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int rem;

    while (num != 0) {
        rem = num % 10;
        reversedNum = reversedNum * 10 + rem;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int count = 0, num;

    while (count < 3) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        if (Palindrome(num)) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }

        count++;
    }
}