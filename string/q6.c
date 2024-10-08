#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100

int main() {
    char str[str_size];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;

    printf("\n\nCount total number of alphabets, digits, and special characters :\n"); // Display information about the task
    printf("--------------------------------------------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alp++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else {
            splch++;
        }
        i++; 
    }

    printf("Number of Alphabets in string is : %d\n", alp);
    printf("Number of Digits in string is : %d\n", digit);
    printf("Number of Special characters in string is : %d\n\n", splch);
}