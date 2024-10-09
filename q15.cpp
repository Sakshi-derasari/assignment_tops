#include <iostream>
using namespace std;

// Template function to sort an array using Bubble Sort
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in wrong order
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to print an array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {5, 3, 8, 4, 2};
    double doubleArray[] = {4.5, 2.2, 9.8, 1.1, 7.6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "Before sorting int array: ";
    printArray(intArray, intSize);
    sortArray(intArray, intSize);
    cout << "After sorting int array: ";
    printArray(intArray, intSize);

    cout << "Before sorting double array: ";
    printArray(doubleArray, doubleSize);
    sortArray(doubleArray, doubleSize);
    cout << "After sorting double array: ";
    printArray(doubleArray, doubleSize);
}