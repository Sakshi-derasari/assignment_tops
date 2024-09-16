#include<stdio.h>
int main(){
    int len=0;
    char str[20];
    printf("Enter string:");
    
       scanf("%s",&str);
    for(int i=0;i<str[i]!='\0';i++){
        len++;
    }
    printf("Length of string=%d",len);
}