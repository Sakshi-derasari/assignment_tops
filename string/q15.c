#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLargestAndSmallestWords(char *str, char *largest, char *smallest) {
    int minLen = 1000, maxLen = 0, currentLen = 0;
    char currentWord[100], *p = str;
    int i = 0;
   
    strcpy(smallest, "");

    while (1) {
    
        if (isalnum(*p)) {
            currentWord[i++] = *p;
            currentLen++;
        } else if (currentLen > 0) { 
            currentWord[i] = '\0';  

            if (currentLen < minLen) {
                minLen = currentLen;
                strcpy(smallest, currentWord);
            }

            if (currentLen > maxLen) {
                maxLen = currentLen;
                strcpy(largest, currentWord);
            }
            currentLen = 0;
            i = 0;
        }

        if (*p == '\0') break;
        p++;
    }
}

int main() {
    char str[1000], largest[100], smallest[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    findLargestAndSmallestWords(str, largest, smallest);

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}