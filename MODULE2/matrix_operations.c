/*
 * Program to multiply or transpose matrices
 */

#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[][10], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int first[][10], int second[][10], int result[][10], 
                      int r1, int c1, int r2, int c2) {
    // Initialize result matrix with zeros
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

// Function to find transpose of a matrix
void transposeMatrix(int matrix[][10], int transpose[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int choice;
    int first[10][10], second[10][10], result[10][10];
    int r1, c1, r2, c2;
    
    printf("Matrix Operations\n");
    printf("1. Matrix Multiplication\n");
    printf("2. Matrix Transpose\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Matrix multiplication
        printf("Enter the rows and columns of first matrix: ");
        scanf("%d %d", &r1, &c1);
        
        printf("Enter the rows and columns of second matrix: ");
        scanf("%d %d", &r2, &c2);
        
        // Check if multiplication is possible
        if (c1 != r2) {
            printf("Error! Column of first matrix not equal to row of second matrix.\n");
            return 1;
        }
        
        // Input matrices
        printf("\nFirst Matrix:\n");
        inputMatrix(first, r1, c1);
        
        printf("\nSecond Matrix:\n");
        inputMatrix(second, r2, c2);
        
        // Multiply matrices
        multiplyMatrices(first, second, result, r1, c1, r2, c2);
        
        // Display result
        printf("\nResultant Matrix:\n");
        displayMatrix(result, r1, c2);
    }
    else if (choice == 2) {
        // Matrix transpose
        printf("Enter the rows and columns of the matrix: ");
        scanf("%d %d", &r1, &c1);
        
        // Input matrix
        inputMatrix(first, r1, c1);
        
        // Find transpose
        transposeMatrix(first, result, r1, c1);
        
        // Display original matrix
        printf("\nOriginal Matrix:\n");
        displayMatrix(first, r1, c1);
        
        // Display transpose
        printf("\nTranspose of Matrix:\n");
        displayMatrix(result, c1, r1);
    }
    else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}