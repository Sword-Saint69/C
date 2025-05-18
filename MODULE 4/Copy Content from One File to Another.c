#include<stdio.h>
int main() {
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("one.txt", "r");
    fp2 = fopen("two.txt", "w");
    while(!feof(fp1)) {
        ch = fgetc(fp1);
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
