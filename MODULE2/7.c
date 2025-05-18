/*Write a C program to find he transpose of a matrix*/
#include <stdio.h>
int main() {

    int a[100][100], trans[100][100], r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    // Input elements in first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // Finding transpose of matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            trans[j][i] = a[i][j];
        }
    }
    // Displaying the transpose
    printf("\nTranspose of given matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d  ", trans[i][j]);
            if (j == r - 1)
                printf("\n\n");
        }
    }
    return 0;
}