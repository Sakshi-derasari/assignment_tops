#include <stdio.h>

int main() {
    int minutes, seconds, hours;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;  
    hours = minutes / 60; 

    printf("%d minute(s) is equal to %d second(s) and %d hour(s).\n", minutes, seconds, hours);
}