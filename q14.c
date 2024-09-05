#include <stdio.h>

int main() {
    char a;
    
    printf("Enter a digit number: ");
    scanf("%c", &a);
    
  
    if (a >= '0' && a <= '9') {
        printf("The ASCII value of %c is %d\n",a,a);
    } 
    else {
        printf("Invalid input. Please enter a single digit number.\n");
    }
}