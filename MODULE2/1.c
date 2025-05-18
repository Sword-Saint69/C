/*Write a C program to read n numbers into an array and find the sum of
all elements.*/

#include <stdio.h>

int main() {
    int n,i;
    
    int sum = 0;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    
    printf("THE SUM OF THE ELEMENTS OF THE ARRAY IS: %d\n", sum);
    return 0;
    }
