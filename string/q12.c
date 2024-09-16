#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countwordIs(char *str) {
    int count = 0;
    char *p = str;
    int len = strlen("is");

    while ((p = strstr(p, "is")) != NULL) {
    
        if ((p == str || !isalpha(*(p - 1))) && !isalpha(*(p + len))) {
            count++;
        }
        p += len;
    }

    return count;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int count = countwordIs(str);
    printf("The word 'is' appears %d times.\n", count);
}