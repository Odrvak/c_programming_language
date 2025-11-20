#include <stdio.h>

#define DEBUG 1
#define VERSION 2

int main(void) {
    #ifdef DEBUG
    printf("Debug mode is enabled\n");
    #endif

    #ifndef RELEASE
    printf("Not in release mode\n");
    #endif

    #if VERSION == 1
    printf("Version 1\n");
    #elif VERSION == 2
    printf("Version 2\n");
    #else
    printf("Unknown version\n");
    #endif

    #if defined(DEBUG) && DEBUG > 0
    printf("Debug level: %d\n", DEBUG);
    #endif

    return 0;
}
