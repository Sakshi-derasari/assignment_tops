#include <stdio.h>

int main() {
    char names[5][50]; 
    int i;

    printf("Enter the names of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
    }

    printf("\nThe names of the students are:\n");
    for(i = 0; i < 5; i++) {
        printf("%s", names[i]);
    }
}