#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {.
    char str[200]; // Array to store the input string
    int word_count = 0;
    int in_word = 0; // Flag to track if we are inside a word

    // Accept a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read the input string, including spaces

    // Loop through the string character by character
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a letter or digit (i.e., part of a word)
        if (isalnum(str[i])) {
            if (!in_word) {
                // If we weren't already in a word, increment word count
                word_count++;
                in_word = 1; // Now we're in a word
            }
        } else {
            // If the current character is not alphanumeric, we are no longer in a word
            in_word = 0;
        }
    }

    // Display the total number of words
    printf("Total number of words: %d\n", word_count);

    return 0;
}
