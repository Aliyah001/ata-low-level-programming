#include <stdio.h>

int main() {
    char text[100];  

    printf("Enter your text: ");
    fgets(text, sizeof(text), stdin);  

    fputs(" ", stdout);
    fputs(text, stdout);  

    return 0;
}
