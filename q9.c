#include<stdio.h>
int main()
{
    int triangle,a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);

    printf("enter the value of b:");
    scanf("%d",&b);
    
    printf("enter the value of c:");
    scanf("%d",&c);
    
    triangle = a+b+c;
    printf("circumference of triangle is: %d\n",triangle);   
}