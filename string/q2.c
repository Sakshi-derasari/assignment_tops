#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("The individual characters in the string are:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            printf("Character %d: %c\n", i + 1, str[i]);
        }
    }
}
