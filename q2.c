#include<stdio.h>
int main()
{
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    res=num1+num2;
    printf("\n Addition=%d",res);
    res=num1-num2;
    printf("\n Substraction=%d",res);
    res=num1*num2;
    printf("\n Multiplication=%d",res);
    res=num1/num2;
    printf("\n Division=%d",res);
    res=num1%num2;
    printf("\n Modulo=%d",res);
}