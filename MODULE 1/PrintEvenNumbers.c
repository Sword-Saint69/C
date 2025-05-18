/* C program to print even numbers up to 100 */
#include <stdio.h>

int main() {
    int i;

    printf("Even numbers between 1 and 100 are:\n");

    for (i = 1; i <= 100; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n"); // Add a newline at the end

    return 0;
}