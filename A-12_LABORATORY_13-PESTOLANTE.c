#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[10][10], int row, int col, char name) {
    printf("Enter elements for Matrix %c (%d x %d):\n", name, row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("-----------------\n");  // Separator after input
}  // <-- Missing closing brace was here

// Function to display a matrix
void displayMatrix(int matrix[10][10], int row, int col, char name) {
    printf("Matrix %c:\n", name);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("-----------------\n");
}

// Function to display the addition operation of two matrices
void displayAddition(int matA[10][10], int matB[10][10], int row, int col) {
    printf("Matrix A + Matrix B:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d + %d ", matA[i][j], matB[i][j]);
            if (j < col - 1) printf("| ");
        }
        printf("\n");
    }
    printf("-----------------\n");
}

// Function to calculate the addition of two matrices and display the result
void addAndDisplayMatrices(int matA[10][10], int matB[10][10], int row, int col) {
    int sum;
    printf("Result:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum = matA[i][j] + matB[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
    printf("-----------------\n"); 
}

int main() {
    int row, col;
    int matrixA[10][10], matrixB[10][10];

    // Input matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    
    printf("-----------------\n"); 

    if (row <= 0 || col <= 0) {
        printf("Invalid dimensions! Rows and columns must be positive integers.\n");
        return 1;
    }

    // Input matrices
    inputMatrix(matrixA, row, col, 'A');
    inputMatrix(matrixB, row, col, 'B');

    // Display input matrices
    displayMatrix(matrixA, row, col, 'A');
    displayMatrix(matrixB, row, col, 'B');

    // Display addition of matrices
    displayAddition(matrixA, matrixB, row, col);

    // Add and display the result
    addAndDisplayMatrices(matrixA, matrixB, row, col);

    return 0;
}