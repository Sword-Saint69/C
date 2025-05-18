#include<stdio.h>
int main() {
    int n, i, f;
    FILE *fp;
    fp = fopen("Factorial.txt", "w");
    printf("Enter the number\n");
    scanf("%d", &n);

    if(n == 0) {
        fprintf(fp, "Factorial is 1\n");
    } else if(n < 0) {
        fprintf(fp, "Factorial does not exist\n");
    } else {
        f = 1;
        for(i = n; i >= 1; i--) {
            f *= i;
        }
        fprintf(fp, "Factorial = %d\n", f);
    }

    fclose(fp);
    return 0;
}
