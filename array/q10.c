#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i,temp=0;
    printf("Enter string.");
    gets(str);
    int len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]!= str[len-i-1]){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("Strings is  palindrome.");
    }
    else{
        printf("string is not palindrome.");
    }
}