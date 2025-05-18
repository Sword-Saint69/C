#include <stdio.h>
#include <string.h>

union Student {
    char name[50];
    int rollno;
    int semester;
};

int main() {
    union Student s;
    strcpy(s.name, "John");
    printf("Name: %s\n", s.name);
    s.rollno = 101;
    printf("Roll No: %d\n", s.rollno);
    s.semester = 3;
    printf("Semester: %d\n", s.semester);
    // Note: Only the last assigned member holds a valid value in a union
    return 0;
}