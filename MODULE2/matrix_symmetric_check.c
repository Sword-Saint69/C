/*
 * Program to check whether a matrix is symmetric or skew-symmetric
 */

#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10];
    int n, i, j;
    int isSymmetric = 1;
    int isSkewSymmetric = 1;
    
    // Input the order of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Find transpose of the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
    
    // Check if matrix is symmetric (A = A^T)
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    
    // Check if matrix is skew-symmetric (A = -A^T)
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != -transpose[i][j]) {
                isSkewSymmetric = 0;
                break;
            }
        }
        if (!isSkewSymmetric) {
            break;
        }
    }
    
    // Display the matrix
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Display the transpose
    printf("\nTranspose:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    
    // Display results
    if (isSymmetric) {
        printf("\nThe matrix is Symmetric.\n");
    } else if (isSkewSymmetric) {
        printf("\nThe matrix is Skew-Symmetric.\n");
    } else {
        printf("\nThe matrix is neither Symmetric nor Skew-Symmetric.\n");
    }
    
    return 0;
}