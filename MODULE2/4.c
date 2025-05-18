/*Write a C program to search for a given number in an array and display
its position.*/
#include <stdio.h>
int main() {

    int arr[100], size, i, key, position = -1;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < size; i++) {
        
        if (arr[i] == key) {
            position = i;
            break;
        }
        
    }
    if (position == -1) {
        printf("Element not found in array.");
        
    }
}