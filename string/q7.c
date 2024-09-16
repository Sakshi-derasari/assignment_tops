   #include<stdio.h>
#include<string.h>
int main(){
    char str[20],str2[20];    
    printf("string=%s",str);
    char str1[50];
    printf("\n Enter string:");
    fgets(str,20,stdin);
    fgets(str1,50,stdin);
    printf("\n String1=%s",str);
    printf("\n String2=%s",str1);
    printf("\n string copy=%s",strcpy(str2,str1));
    printf("\n string 3=%s",str2);
}