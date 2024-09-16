#include<stdio.h>
int main(){
    int array[2][3]={{1,2,3},{8,5,7}};
    int row,col;
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",array[row][col]);
        }
    }
}