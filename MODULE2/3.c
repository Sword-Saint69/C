/*Write a C program to count the number of even and odd numbers in an
array.*/
#include <stdio.h>
int main() {

    int arr[100], size, i, even = 0, odd = 0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        
        if (arr[i] % 2 == 0) {
            even++;

        }
        else {
            odd++;
        }
    }
}