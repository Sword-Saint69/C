#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("one.txt", "r");
    if (src == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }
    dest = fopen("two.txt", "w");
    if (dest == NULL) {
        printf("Cannot open destination file.\n");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);

    // Display content of two.txt
    dest = fopen("two.txt", "r");
    if (dest == NULL) {
        printf("Cannot open two.txt for reading.\n");
        return 1;
    }
    printf("Content of two.txt:\n");
    while ((ch = fgetc(dest)) != EOF) {
        putchar(ch);
    }
    fclose(dest);
    return 0;
}