#include <unistd.h>   // for write and STDOUT_FILENO
#include <fcntl.h>    // for open
#include <string.h>   // for strlen
#include <sys/types.h>
#include <sys/stat.h>

int main() {
    const char *message = "Coding in C is powerful!\n";

    // to  write to standard output
    write(STDOUT_FILENO, message, strlen(message));

    //to open the file in write mode (create if it doesn't exist, truncate if it does)
    int file = open("write.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (file < 0) {
        write(STDOUT_FILENO, "Error opening file.\n", 20);
        return 1;
    }

    // Write to the file
    write(file, message, strlen(message));

    // Close the file
    close(file);

    return 0;
}
