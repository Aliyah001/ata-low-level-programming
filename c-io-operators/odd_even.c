#include <stdio.h>

int main() {
    int num;

    // Take input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check odd or even
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}
