/* C program to find the largest element among n numbers using a function */
#include <stdio.h>

int findLargest(int arr[], int n) {
    int i, max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);
    printf("The largest element is: %d\n", largest);

    return 0;
}