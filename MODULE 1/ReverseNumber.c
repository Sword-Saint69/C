/* C program to read a natural number and display its reverse */
#include <stdio.h>

int main() {
    int n, reverse = 0, digit;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    // Handle non-natural numbers
    if (n <= 0) {
        printf("Please enter a natural number (positive integer).\n");
        return 1;
    }

    printf("Reverse of %d is: ", n);

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d\n", reverse);
    return 0;
}