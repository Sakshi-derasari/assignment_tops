#include<stdio.h>
int main()
{
    int a,salary,n=12; //12 month ina year//
    printf("enter person's monthly salary:");
    scanf("%d",&a);

    salary = a*n;
    printf("annual salary is: %d\n",salary);
}