//armstrong number using for and while loop

#include<stdio.h>
int main(){
    int num,rem,sum=0,origin_num;
    printf("Enter number:");
    scanf("%d",&num);
    origin_num=num;

    while(num>0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }

    printf("sum of number=%d",sum);

    if(sum==origin_num){
        printf("\n Number is armstrong number .");
    }
    else{
        printf("\n Number is not an armstrong number.");
    }
}


// #include <stdio.h>
// #include <math.h> 

// int main() {
//     int num, temp, originalNum, remainder, sum = 0, n = 0; 

//     printf("Input a number: ");
//     scanf("%d", &num);

//     originalNum = num;

//     for (temp = num; temp != 0; n++) {
//         temp /= 10;
//     }

//     for (temp = num; temp != 0; temp /= 10) {
//         remainder = temp % 10;
//         sum += pow(remainder, n);
//     }

//     if (sum == originalNum) {
//         printf("%d is an Armstrong number.\n", originalNum);
//     } else {
//         printf("%d is not an Armstrong number.\n", originalNum);
//     }
// } 