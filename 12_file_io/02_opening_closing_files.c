#include <stdio.h>

int main(void) {
    FILE *fp;

    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing\n");
        return 1;
    }
    fprintf(fp, "Writing mode\n");
    fclose(fp);

    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading\n");
        return 1;
    }
    char buffer[100];
    fgets(buffer, sizeof(buffer), fp);
    printf("Read: %s", buffer);
    fclose(fp);

    fp = fopen("example.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open file for appending\n");
        return 1;
    }
    fprintf(fp, "Appending mode\n");
    fclose(fp);

    fp = fopen("example.txt", "r+");
    if (fp == NULL) {
        printf("Error: Could not open file for read/write\n");
        return 1;
    }
    printf("\nFull content:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}
