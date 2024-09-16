// #include<stdio.h>
// int main(){
//     int col,row;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//           if(col%2!=0){
//             printf("1");
//           }
//           else{
//             printf("0");
//           }
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int row,col;
//     char ch='A';
//     for(row=0;row<=4;row++){
//         for(col=0;col<=row;col++){
//             printf("%c",ch++);
//         }
//     printf("\n");
//   }
// }

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     int n=5;
//     for(row=1;row<=n;row++){
//         for(space=n-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=2*row-1;col++){
//             printf("* ");
//         }
//         printf("\n");
//     } 
// }

// #include<stdio.h>
// int main(){
//     int row,col,n=1;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("  %d",n++);
//         }
//     printf("\n");
//   }
// }

// #include<stdio.h>
// int main(){
//     int row,col;
//     char ch='A';
//     for(row=0;row<=4;row++){
//         for(col=0;col<=row;col++){
//             printf("%c ",ch+col);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int  main(){
    
//     int num = 10;
//     for(int row = 1; row <= num; row += 1){
//         for(int col = 1; col <= row; col += 1){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }



#include <stdio.h>
int main(){
    int row=6,col=1,i,j;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=row-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}