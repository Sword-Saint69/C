/*
 * Program to count the number of words and lines in a string
 */

#include <stdio.h>

int main() {
    char str[1000];
    int i, words = 0, lines = 1;  // Start with 1 line
    int inWord = 0;  // Flag to track if we're inside a word
    
    printf("Enter a string (press Enter twice to finish):\n");
    
    // Read the entire text including newlines
    // This allows multi-line input until user presses Enter twice
    scanf("%[^EOF]", str);
    
    // Count words and lines
    for(i = 0; str[i] != '\0'; i++) {
        // Count lines
        if(str[i] == '\n') {
            lines++;
        }
        
        // Count words
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0;
        }
        else if(inWord == 0) {
            inWord = 1;
            words++;
        }
    }
    
    // Display results
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);
    
    return 0;
}