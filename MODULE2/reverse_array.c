/*
 * Program to reverse the content of an array without using another array
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, temp;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display original array
    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Reverse the array in-place
    for(i = 0; i < n/2; i++) {
        // Swap elements at positions i and n-i-1
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    // Display reversed array
    printf("\nReversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}