#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Write to file
    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter a string to write to file: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);
    fclose(fp);

    // Read from file
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Content of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}