/*
 * Program to count vowels and consonants in a string
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for(i = 0; str[i] != '\0'; i++) {
        // Convert to lowercase for easier checking
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert uppercase to lowercase for checking
            if(ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;  // Convert to lowercase
            }
            
            // Check if vowel
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}