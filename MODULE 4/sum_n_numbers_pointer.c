#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("Sum = %d\n", sum);
    return 0;
}