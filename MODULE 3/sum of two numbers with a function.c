#include <stdio.h>

int sum() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

int main() {
    int result = sum();
    printf("Sum = %d\n", result);
    return 0;
}