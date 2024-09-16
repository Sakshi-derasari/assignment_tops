#include<stdio.h>
int main(){
    int i, arr[20];
    printf("Enter 5 elements of array:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    // sorting logic:
    for(i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //for printing in ascending order.
    printf("Ascending order:\n");
    for(i=0;i<5;i++){
        printf("%d \t",arr[i]);
    }
}