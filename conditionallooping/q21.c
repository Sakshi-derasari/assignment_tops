#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 50; i++) {
        printf("%02d ", i);

        if(i % 10 == 0) {
            printf("\n");
        }
    }
}