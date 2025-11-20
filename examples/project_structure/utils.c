#include <stdio.h>
#include <string.h>
#include "utils.h"

void print_header(const char *title) {
    int len = strlen(title);
    printf("\n");
    for (int i = 0; i < len + 4; i++) printf("=");
    printf("\n  %s\n", title);
    for (int i = 0; i < len + 4; i++) printf("=");
    printf("\n\n");
}

void print_separator(void) {
    printf("\n");
    for (int i = 0; i < 40; i++) printf("-");
    printf("\n\n");
}
