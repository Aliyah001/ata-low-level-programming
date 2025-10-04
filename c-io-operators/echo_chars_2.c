#include <stdio.h>

int main() {
    int ch;

    while ((ch = getchar()) != '\n') {
        putchar(ch);  // Echo each character immediately
    }

    putchar('\n');  // Add a newline at the end
    return 0;
}
