#include <stdio.h>

struct Flags {
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
    unsigned int reserved : 5;
};

struct PackedData {
    unsigned int a : 4;
    unsigned int b : 4;
    unsigned int c : 8;
};

int main(void) {
    struct Flags f = {0};
    printf("Size of Flags: %zu bytes\n", sizeof(struct Flags));

    f.flag1 = 1;
    f.flag2 = 0;
    f.flag3 = 1;

    printf("flag1: %u\n", f.flag1);
    printf("flag2: %u\n", f.flag2);
    printf("flag3: %u\n", f.flag3);

    struct PackedData pd;
    printf("\nSize of PackedData: %zu bytes\n", sizeof(struct PackedData));

    pd.a = 15;
    pd.b = 7;
    pd.c = 255;

    printf("a: %u\n", pd.a);
    printf("b: %u\n", pd.b);
    printf("c: %u\n", pd.c);

    return 0;
}
