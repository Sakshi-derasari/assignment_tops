#include<stdio.h>
#include<string.h>
int main(){
    char str[20],str2[20];    
    printf("string=%s",str);
    char str1[50];
    printf("\n Enter string 1:");
    fgets(str,20,stdin);
    printf("\n Enter string 2:");
    fgets(str1,50,stdin);
    printf("\n String1=%s",str);
    printf("\n String2=%s",str1);
    printf("concatenate = %s",strcat(str,str1));
}