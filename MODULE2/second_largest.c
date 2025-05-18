/*
 * Program to find the second largest element in an array
 */

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Check if array has at least 2 elements
    if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 1;
    }
    
    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        // Update largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    // Check if second largest was found
    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (all elements are the same).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
    
    return 0;
}