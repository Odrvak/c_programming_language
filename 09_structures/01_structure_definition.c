#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main(void) {
    struct Point p1;
    p1.x = 10;
    p1.y = 20;

    printf("Point: (%d, %d)\n", p1.x, p1.y);

    struct Student s1;
    snprintf(s1.name, sizeof(s1.name), "John Doe");
    s1.age = 20;
    s1.gpa = 3.75f;

    printf("\nStudent Info:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
}
