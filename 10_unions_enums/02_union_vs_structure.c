#include <stdio.h>

struct StructData {
    int i;
    float f;
    char c;
};

union UnionData {
    int i;
    float f;
    char c;
};

int main(void) {
    struct StructData s;
    union UnionData u;

    printf("Structure:\n");
    printf("Size: %zu bytes\n", sizeof(s));
    s.i = 10;
    s.f = 3.14f;
    s.c = 'A';
    printf("i: %d, f: %.2f, c: %c\n\n", s.i, s.f, s.c);

    printf("Union:\n");
    printf("Size: %zu bytes\n", sizeof(u));
    u.i = 10;
    printf("After setting i: %d\n", u.i);
    u.f = 3.14f;
    printf("After setting f: %.2f (i is now: %d)\n", u.f, u.i);
    u.c = 'A';
    printf("After setting c: %c (i is now: %d)\n", u.c, u.i);

    return 0;
}
