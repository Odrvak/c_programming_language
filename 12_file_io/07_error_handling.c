#include <stdio.h>

int main(void) {
    FILE *fp = fopen("test_error.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(fp, "Testing error handling\n");

    if (ferror(fp)) {
        printf("Error occurred during write\n");
        clearerr(fp);
    } else {
        printf("Write successful\n");
    }

    fclose(fp);

    fp = fopen("test_error.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    if (feof(fp)) {
        printf("End of file reached\n");
    }

    if (ferror(fp)) {
        printf("Error occurred during read\n");
    }

    fclose(fp);

    return 0;
}
