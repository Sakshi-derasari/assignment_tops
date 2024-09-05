#include<stdio.h>
int main()
{
    int base,height,area;
    
    printf("enter the base of the triangle:");
    scanf("%d",&base);

    printf("enter the height of the triangle:");
    scanf("%d",&height);

    area = (base*height)/2;
    printf("the area of the triangle is : %.2d\n",area);
}