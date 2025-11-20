#include <stdio.h>

int main(void) {
    FILE *fp;

    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "Hello, File I/O!\n");
    fprintf(fp, "This is a test file.\n");

    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
