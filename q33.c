#include <stdio.h>

int main() {
    int N;
    int N1, N2, N3;

    printf("Enter an integer: ");
    scanf("%d", &N);

    N1 = N;         
    N2 = N * N;       
    N3 = N * N * N;   

    printf("N^1 = %d\n", N1);
    printf("N^2 = %d\n", N2);
    printf("N^3 = %d\n", N3);

}