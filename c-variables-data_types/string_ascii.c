#include <stdio.h>

int main() {
    char str[] = "Hello";   
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Character: %c, ASCII: %d\n", str[i], str[i]);
 }
    return 0;
}
