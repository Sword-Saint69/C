#include<stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("one.txt", "r");
    printf("The content in file is:\n");
    while(!feof(fp)) {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}
