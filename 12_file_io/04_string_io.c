#include <stdio.h>

int main(void) {
    FILE *fp = fopen("lines.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fputs("First line\n", fp);
    fputs("Second line\n", fp);
    fputs("Third line\n", fp);

    fclose(fp);

    fp = fopen("lines.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Reading lines:\n");
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
