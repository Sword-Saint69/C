/*Write a C program to find the sum of diagonal elements of a matrix*/
#include <stdio.h>
int main() {
    int a[100][100], r, c, i, j, sum = 0;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    // Input elements in the matrix
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Finding sum of diagonal elements
    for (i = 0; i < r; i++) {
        if (i < c) { // To avoid out-of-bounds for non-square matrices
            sum += a[i][i];
        }
    }
    printf("\nSum of diagonal elements = %d\n", sum);
    return 0;
}