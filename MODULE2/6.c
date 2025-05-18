/*Write a C program to add 2 matrices*/
#include <stdio.h>
int main() {
    int a[100][100], b[100][100], sum[100][100], r, c, i, j;
    
    // Get matrix dimensions
    printf("Enter rows and columns of matrices: ");
    scanf("%d %d", &r, &c);
    
    // Input elements in first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input elements in second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    // Add two matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Print the result
    printf("\nSum of two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}