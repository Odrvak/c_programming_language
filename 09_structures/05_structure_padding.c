#include <stdio.h>

struct Example1 {
    char a;
    int b;
    char c;
};

struct Example2 {
    char a;
    char c;
    int b;
};

struct Example3 {
    int a;
    char b;
    char c;
};

int main(void) {
    printf("Structure sizes with padding:\n");
    printf("sizeof(struct Example1): %zu bytes\n", sizeof(struct Example1));
    printf("sizeof(struct Example2): %zu bytes\n", sizeof(struct Example2));
    printf("sizeof(struct Example3): %zu bytes\n", sizeof(struct Example3));

    printf("\nMember offsets in Example1:\n");
    printf("offsetof(a): %zu\n", offsetof(struct Example1, a));
    printf("offsetof(b): %zu\n", offsetof(struct Example1, b));
    printf("offsetof(c): %zu\n", offsetof(struct Example1, c));

    return 0;
}
