#include <stdio.h>

int main(void) {
    int i = 10;
    float f = 3.14f;
    double d = 9.87654321;
    char c = 'A';

    printf("Implicit casting:\n");
    printf("int to float: %f\n", i);
    printf("float to int: %d\n", (int)f);

    printf("\nExplicit casting:\n");
    printf("double to int: %d\n", (int)d);
    printf("int to char: %c\n", (char)(i + 55));
    printf("char to int: %d\n", (int)c);

    printf("\nMixed operations:\n");
    int result = i + (int)f;
    printf("int + (int)float: %d\n", result);

    float fresult = i + f;
    printf("int + float: %f\n", fresult);

    return 0;
}
