#include <stdio.h>
#include <unistd.h>  // for write
#include <string.h>  // for strlen

int main() {
    FILE *file;
    char firstWord[20];
    int ch;

    // Step 1:to open file in write mode
    file = fopen("data.txt", "w");
    if (file == NULL) {
        write(STDOUT_FILENO, "Error opening file for writing.\n", 32);
        return 1;
    }

    // Step 2: to write line using fprintf
    fprintf(file, "C is a lovely language.");

    // Step 3: to add exclamation mark using fputc
    fputc('!', file);

    // Step 4: to close the file
    fclose(file);

    // Step 5: Reopening file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL) {
        write(STDOUT_FILENO, "Error opening file for reading.\n", 32);
        return 1;
    }

    // Step 6: Read first word using fscanf
    fscanf(file, "%s", firstWord);

    // Step 7: Print "First word: C" using write and putchar
    write(STDOUT_FILENO, "First word: ", 12);
    for (int i = 0; firstWord[i] != '\0'; i++) {
        putchar(firstWord[i]);
    }
    putchar('\n');

    // Step 8: Print rest of file using fgetc
    write(STDOUT_FILENO, "Rest of file: ", 14);
    // Move file pointer to position after first word
    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    // Step 9: Close the file
    fclose(file);

    return 0;
}
