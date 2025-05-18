/* C program to find the sum of digits of a number */
#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by taking the absolute value
    if (number < 0) {
        number = -number; // or use number = abs(number); if <stdlib.h> is included
    }

    // Loop to extract digits and add them to sum
    int originalNumber = number; // Store original number for display
    while (number > 0) {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add it to sum
        number /= 10;        // Remove the last digit
    }

    printf("Sum of the digits of %d is: %d\n", originalNumber, sum);

    return 0;
}