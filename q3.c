#include<stdio.h>
// #define pi 3.14  
int main(){
    int radius;
    const float pi=3.14;
    float area;
    printf("\n Enter radius:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("Area of circle=%.2f",area);

    float circumference;
    printf("\n Enter circumference:");
    scanf("%d",&circumference);
    circumference=2*pi*radius;
    printf("Circumference of circle=%.2f",circumference);
}