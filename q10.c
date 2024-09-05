#include<stdio.h>
int main()
{
    int A,wl,hl,hw;
    printf("enter the wl:");
    scanf("%d",&wl);

    printf("enter the hl:");
    scanf("%d",&hl);
    
    printf("enter the hw:");
    scanf("%d",&hw);
    
    A = 2*(wl+hl+hw);
    printf("arae of rectangular prism is: %d\n",A);   
}