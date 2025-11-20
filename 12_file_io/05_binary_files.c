#include <stdio.h>

struct Record {
    int id;
    char name[50];
    float salary;
};

int main(void) {
    struct Record records[] = {
        {1, "Alice", 50000.0f},
        {2, "Bob", 60000.0f},
        {3, "Charlie", 55000.0f}
    };

    FILE *fp = fopen("records.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fwrite(records, sizeof(struct Record), 3, fp);
    fclose(fp);

    fp = fopen("records.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    struct Record read_records[3];
    fread(read_records, sizeof(struct Record), 3, fp);

    printf("Records read from binary file:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               read_records[i].id, read_records[i].name, read_records[i].salary);
    }

    fclose(fp);

    return 0;
}
