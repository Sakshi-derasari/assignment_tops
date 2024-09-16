#include<stdio.h>
int main(){
    int num,rev=0,rem,i;
    printf("Enter number:");
    scanf("%d",&num);
    for (; num != 0; num /= 10) {
        rem = num % 10;
        rev = rev* 10 + rem;
    }
    printf("reverse number = %d",rev);
}