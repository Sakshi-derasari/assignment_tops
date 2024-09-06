#include<stdio.h>
int main(){
    int kilometer,meter;

    printf("enter the kilometers:");
    scanf("%d",&kilometer);

    meter = kilometer*1000;
    printf("%d kilometer is equal to %d meter\n.",kilometer,meter);
}