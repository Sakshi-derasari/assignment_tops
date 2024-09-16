#include <stdio.h>

int main() {
    float costPrice, sellingPrice, result;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        result = sellingPrice - costPrice;
        printf("You made a profit of %.2f\n", result);
    } else if (costPrice > sellingPrice) {
        result = costPrice - sellingPrice;
        printf("You had a loss of %.2f\n", result);
    } else {
        printf("No profit, no loss.\n");
    }
}
