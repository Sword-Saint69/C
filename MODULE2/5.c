/*Write a C program to read a matrix of size rxc and print it.*/
#include <stdio.h>
int main() {

    int arr[100][100], r, c, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("Enter the elements of matrix: ");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");

    }
    
}