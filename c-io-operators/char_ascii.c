#include <stdio.h>

int main() {
    char ch;

    // Ask the user for a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
