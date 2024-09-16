#include<stdio.h>
int main(){
    int m;
    printf("enter the value of integer m:");
    scanf("%d",&m);

    if(m>0)
    printf("m is 1");
    else if (m<0)
    printf("m is -1");
    else {
        printf("m is 0");
    }
}