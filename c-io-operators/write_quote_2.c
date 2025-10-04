#include <stdio.h>

int main() {
    FILE *file = fopen("quote.txt", "w"); // Open file in write mode
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fputs("The journey of a thousand miles begins with a single step.\n", file);

    fclose(file); // Close the file
    return 0;
}
