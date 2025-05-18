/*C program to find largest among two numbers using conditional operator.*/
#include <stdio.h>
int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    printf("Largest number is: %d", max);
    return 0;
}