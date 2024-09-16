#include<stdio.h>
int show(int a,char ch,int b,int res){
    printf("%d %c %d=%d",a,ch,b,res);
}
int add(int a,int b){
    int res=a+b;
    show(a,'+',b,res);
}
int sub(int a,int b){
    int res=a-b;
    show(a,'-',b,res);
}
int multiply(int a,int b){
    int res=a*b;
    show(a,'*',b,res);
}
int division(int a,int b){
    int res=a/b;
    show(a,'/',b,res);
}
int main(){
    int choice;
    int num1,num2;
    do{
    printf("\n Enter choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
                printf("Enter num1,num2:");
                scanf("%d %d",&num1,&num2);
                add(num1,num2);
                break;
        case 2: 
                printf("Enter num1,num2:");
                scanf("%d %d",&num1,&num2);
                sub(num1,num2);
                break;
        case 3:
                printf("Enter num1,num2:");
                scanf("%d %d",&num1,&num2);
                multiply(num1,num2);
                break;
        case 4: 
                 printf("Enter num1,num2:");
                scanf("%d %d",&num1,&num2);
                division(num1,num2);
                break;
        default:
                printf("Invalid choice");
    }
    }while(choice<=4);
}