#include<stdio.h>
int fact(int num){
    if(num==1){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Factorial=%d",fact(n));   
}