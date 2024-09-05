#include<stdio.h>
#include<math.h>
int main()
{
    int principle, rate, time, CI;+

    printf("Enter principle (amount): ");
    scanf("%d", &principle);

    printf("Enter time: ");
    scanf("%d", &time);

    printf("Enter rate: ");
    scanf("%d", &rate);

    CI = principle* (pow((1 + rate / 100), time));

    printf("Compound Interest = %d", CI);
}