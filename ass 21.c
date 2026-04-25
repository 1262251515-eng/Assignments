#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // Open source file in read mode
    fp1 = fopen("source.txt", "r");

    // Open destination file in write mode
    fp2 = fopen("destination.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully.");

    // Close files
    fclose(fp1);
    fclose(fp2);

    return 0;
}
