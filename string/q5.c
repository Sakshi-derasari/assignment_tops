#include<stdio.h>
int main(){
    char str1[20],str[20];
    int i;
    printf("Enter string:");
    gets(str1);
    printf("Enter string 2:");
    gets(str);

    for(i=0;str1[i]==str[i] && str1[i]!='\0';i++);
    
    if(str1[i]>str[i]){
        printf("Str1 is greater");
    }
    else if(str1[i]<str [i]){
        printf("Str is greater.");
    }
    else{
        printf("Both strings are same.");
    }
}