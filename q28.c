#include <stdio.h>

int main() {
    int years, months, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;  
    months = years * 12; 

    printf("%d year(s) is equivalent to %d day(s) and %d month(s).\n", years, days, months);
}