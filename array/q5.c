#include <stdio.h>

// Function to sort the array
void sortArray(int arr[], int n, int order) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            // Sort in ascending or descending order
            if ((order == 1 && arr[i] > arr[j]) || (order == 2 && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2, i, choice;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);

    sortArray(arr1, n1, choice);
    sortArray(arr2, n2, choice);

    // Print the sorted arrays
    printf("Sorted first array:\n");
    printArray(arr1, n1);

    printf("Sorted second array:\n");
    printArray(arr2, n2);
}