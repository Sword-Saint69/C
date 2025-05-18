#include<stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("one.txt", "w");
    printf("Enter the line of text\n");
    while((ch = getchar()) != '\n') {
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}
