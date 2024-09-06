#include<stdio.h>
#define num_expense 5
int main(){
    char names[num_expense][50];
    int expenses[num_expense];
    int totalexpense = 0;
    int averageexpense = 0;

    for(int i=0;i<num_expense;i++){
        printf("enter the name of expense:",i+1);
        scanf("%s",&names[i]);

        printf("enter the value of expense:",i+1);
        scanf("%d",&expenses[i]);

        totalexpense += expenses[i];
    }
        averageexpense = totalexpense / num_expense;

    printf("\nTotal Salary: %d\n", totalexpense);
    printf("Average Salary: %d\n", averageexpense);
}