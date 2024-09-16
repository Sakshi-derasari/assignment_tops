#include <stdio.h>

int main() {
    int customerID, units;
    char name[50];
    float totalAmount = 0, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 350) {
        totalAmount = units * 1.20;
    } else if (units > 350 && units < 600) {
        totalAmount = 350 * 1.20 + (units - 350) * 1.50;
    } else if (units >= 600 && units < 800) {
        totalAmount = 350 * 1.20 + 250 * 1.50 + (units - 600) * 1.80;
    } else {
        totalAmount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (units - 800) * 2.00;
    }

    if (totalAmount > 800) {
        surcharge = totalAmount * 0.18;
        totalAmount += surcharge;
    }

    if (totalAmount < 256) {
        totalAmount = 256;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to be Paid: Rs. %.2f\n", totalAmount);

}
