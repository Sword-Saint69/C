#include <stdio.h>

struct Employee {
    char name[50];
    int empId;
    float salary;
};

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for (i = 0; i < n; i++) {
        printf("Enter name, employee id and salary for employee %d:\n", i + 1);
        scanf("%s %d %f", emp[i].name, &emp[i].empId, &emp[i].salary);
    }
    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", emp[i].name, emp[i].empId, emp[i].salary);
    }
    return 0;
}