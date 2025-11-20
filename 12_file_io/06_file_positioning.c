#include <stdio.h>

int main(void) {
    FILE *fp = fopen("position.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "0123456789ABCDEFGHIJ");
    fclose(fp);

    fp = fopen("position.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Current position: %ld\n", ftell(fp));

    fseek(fp, 10, SEEK_SET);
    printf("After fseek(10, SEEK_SET): %ld\n", ftell(fp));
    printf("Character at position 10: %c\n", fgetc(fp));

    fseek(fp, 5, SEEK_CUR);
    printf("After fseek(5, SEEK_CUR): %ld\n", ftell(fp));
    printf("Character: %c\n", fgetc(fp));

    fseek(fp, -5, SEEK_END);
    printf("After fseek(-5, SEEK_END): %ld\n", ftell(fp));
    printf("Character: %c\n", fgetc(fp));

    rewind(fp);
    printf("After rewind(): %ld\n", ftell(fp));
    printf("Character: %c\n", fgetc(fp));

    fclose(fp);

    return 0;
}
