#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    FILE *fp;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    fp = fopen("factorial", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fp, "Factorial of %d is %llu\n", n, fact);
    fclose(fp);

    printf("Factorial written to file 'factorial'.\n");
    return 0;
}