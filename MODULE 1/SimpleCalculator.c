/* C program to implement a simple calculator using switch statement */
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover newline

    // Prompt user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%lf + %lf = %lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%lf - %lf = %lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}