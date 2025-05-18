/* C program to print prime numbers within a given interval */
#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;

    printf("Enter lower and upper interval values: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (i <= 1)
            continue;
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}