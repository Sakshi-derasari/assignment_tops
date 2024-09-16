#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main() {
    char str[100];
    int freq[ASCII_SIZE] = {0};
    int i, max = 0;
    char result;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;  
    }

    for (i = 0; i < ASCII_SIZE; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = (char)i;
        }
    }
    printf("The character '%c' is most with a count of %d\n", result, max);
}
