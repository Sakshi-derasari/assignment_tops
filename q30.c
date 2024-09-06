#include <stdio.h>

int main() {
    int years, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("enter the number of days:");
    scanf("%d",&days);

    days = years * 365;
    years = days / 365;

    printf("%d years is equal to %d days.\n", years,days);
    printf("%d days is equal to %d years.\n",days,years);
}