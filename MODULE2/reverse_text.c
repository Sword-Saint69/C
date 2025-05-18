/*
 * Program to read a line of text and display it backward
 */

#include <stdio.h>

int main() {
    char text[81]; // 80 characters + null terminator
    int i = 0;
    char ch;
    
    printf("Enter a line of text (max 80 characters):\n");
    
    // Read characters until Enter key or max limit
    while ((ch = getchar()) != '\n' && i < 80) {
        text[i++] = ch;
    }
    
    text[i] = '\0'; // Null-terminate the string
    
    printf("\nThe text backward is:\n");
    
    // Display the text backward
    for (i = i - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    printf("\n");
    
    return 0;
}