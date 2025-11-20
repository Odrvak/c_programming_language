#include <stdio.h>

int main(void) {
    FILE *fp = fopen("chars.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char text[] = "Hello, World!";
    for (int i = 0; text[i] != '\0'; i++) {
        fputc(text[i], fp);
    }
    fputc('\n', fp);

    fclose(fp);

    fp = fopen("chars.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Reading characters:\n");
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
