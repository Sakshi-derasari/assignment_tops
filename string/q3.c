#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str) - 1;
    
    if (str[length] == '\n') {
        str[length] = '\0';
    }

    printf("The characters of the string in reverse order are:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("Character %d: %c\n", length - i, str[i]);
    }
}