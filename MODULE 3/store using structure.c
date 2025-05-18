//Write a C program to store information of a student using a structure.

#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s;
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Student Info:\nRoll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
    return 0;
}
