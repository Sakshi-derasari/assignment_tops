#include <stdio.h>

int main() {
    int height;

    printf("Enter the height of the person in centimeters: ");
    scanf("%d", &height);

    if (height < 150) {
        printf("The person is categorized as Short.\n");
    } else if (height >= 150 && height <= 180) {
        printf("The person is categorized as Average height.\n");
    } else {
        printf("The person is categorized as Tall.\n");
    }
}