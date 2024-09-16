#include <stdio.h>
#include<string.h>
#include <ctype.h>

// Function to remove non-alphabet characters
void removeNonAlphabet(char *str) {
    int i = 0, j = 0;
    
    // Traverse the string character by character
    while (str[i] != '\0') {
        // If the character is an alphabet, keep it
        if (isalpha(str[i])) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    
    // Null terminate the resulting string
    str[j] = '\0';
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input if present
    str[strcspn(str, "\n")] = '\0';

    // Remove non-alphabet characters
    removeNonAlphabet(str);

    printf("String after removing non-alphabet characters: %s\n", str);

    return 0;
}