#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

struct Person {
    char name[50];
    int age;
    float height;
};

int main(void) {
    struct Rectangle r1 = {10, 20};
    printf("Rectangle: %d x %d\n", r1.width, r1.height);

    struct Rectangle r2 = {.height = 30, .width = 15};
    printf("Rectangle: %d x %d\n", r2.width, r2.height);

    struct Person p1 = {"Alice", 25, 5.6f};
    printf("\nPerson: %s, %d years, %.1f ft\n", p1.name, p1.age, p1.height);

    struct Person p2 = {.name = "Bob", .age = 30};
    printf("Person: %s, %d years, %.1f ft\n", p2.name, p2.age, p2.height);

    return 0;
}
