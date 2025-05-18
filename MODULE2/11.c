/*
 * Program to find the sum of even numbers in an array
 */

 #include <stdio.h>

 int main() {
     int n, i, sum = 0;
     
     // Input array size
     printf("Enter the size of the array: ");
     scanf("%d", &n);
     
     int arr[n];
     
     // Input array elements
     printf("Enter %d elements:\n", n);
     for(i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
     }
     
     // Calculate sum of even numbers
     for(i = 0; i < n; i++) {
         if(arr[i] % 2 == 0) {  // Check if number is even
             sum += arr[i];
         }
     }
     
     // Display result
     printf("Sum of even numbers in the array: %d\n", sum);
     
     return 0;
 }