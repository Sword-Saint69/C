/* C program to swap two numbers using pass by value */
#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swap function: x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}