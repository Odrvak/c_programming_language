#include <stdio.h>
#include <stdlib.h>

void xor_encrypt_decrypt(const char *input_file, const char *output_file, char key) {
    FILE *in = fopen(input_file, "rb");
    FILE *out = fopen(output_file, "wb");

    if (in == NULL || out == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(ch ^ key, out);
    }

    fclose(in);
    fclose(out);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <input_file> <output_file> <key>\n", argv[0]);
        return 1;
    }

    char key = argv[3][0];

    printf("Processing file...\n");
    xor_encrypt_decrypt(argv[1], argv[2], key);
    printf("Done!\n");

    return 0;
}
