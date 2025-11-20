#include <stdio.h>

#define STRINGIFY(x) #x
#define TO_STRING(x) STRINGIFY(x)
#define PRINT_VAR(var) printf(#var " = %d\n", var)
#define CONCAT(a, b) a##b

int main(void) {
    printf("%s\n", STRINGIFY(Hello World));
    printf("%s\n", TO_STRING(100 + 200));

    int value = 42;
    PRINT_VAR(value);

    int var1 = 10;
    int var2 = 20;
    int result = CONCAT(var, 1) + CONCAT(var, 2);
    printf("result = %d\n", result);

    int xy = 100;
    printf("xy = %d\n", CONCAT(x, y));

    return 0;
}
