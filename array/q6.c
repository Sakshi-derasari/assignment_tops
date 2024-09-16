#include <stdio.h>

// Function to take matrix input from the user
void inputMatrix(int matrix[10][10], int row, int col) {
    printf("Enter the elements of the matrix (%d x %d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int row1, col1, row2, col2, choice;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);

    printf("Input the first matrix:\n");
    inputMatrix(matrix1, row1, col1);
    printf("Input the second matrix:\n");
    inputMatrix(matrix2, row2, col2);

    // Menu to perform matrix operations
    printf("\nChoose the operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    scanf("%d", &choice);

    if (choice == 1) {
        if (row1 == row2 && col1 == col2) {
            addMatrices(matrix1, matrix2, result, row1, col1);
            printf("Result of matrix addition:\n");
            printMatrix(result, row1, col1);
        } else {
            printf("Matrix addition not possible. The dimensions must be the same.\n");
        }
    }

    else if (choice == 2) {
        if (row1 == row2 && col1 == col2) {
            subtractMatrices(matrix1, matrix2, result, row1, col1);
            printf("Result of matrix subtraction:\n");
            printMatrix(result, row1, col1);
        } else {
            printf("Matrix subtraction not possible. The dimensions must be the same.\n");
        }
    }

    else if (choice == 3) {
        if (col1 == row2) {
            multiplyMatrices(matrix1, matrix2, result, row1, col1, col2);
            printf("Result of matrix multiplication:\n");
            printMatrix(result, row1, col2);
        } else {
            printf("Matrix multiplication not possible. The number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        }
    }
}