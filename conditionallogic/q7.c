#include<stdio.h>
int main(){
    int i;

    printf("enter marks:");
    scanf("%d",&i);

    if (i>35){
        printf("the student is pass");
    }
    else{
        printf("the student is fail");
    }
}