/*
 * Program to check if a string is palindrome without using string functions
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    int isPalindrome = 1;  // Assume it's a palindrome initially
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Calculate length of string manually
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    // Check if string is palindrome
    for(i = 0; i < length/2; i++) {
        if(str[i] != str[length-1-i]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }
    
    // Display result
    if(isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    
    return 0;
}