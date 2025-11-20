#include <stdio.h>

int main(void) {
    printf("Preprocessing -> Compilation -> Assembly -> Linking\n");
    printf("gcc -E source.c -o source.i\n");
    printf("gcc -S source.i -o source.s\n");
    printf("gcc -c source.s -o source.o\n");
    printf("gcc source.o -o executable\n");
    return 0;
}
