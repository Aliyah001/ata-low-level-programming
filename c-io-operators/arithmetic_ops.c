#include <stdio.h>

int main() {
    int num1, num2;

    // Take inputs
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Perform operations
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);

    if (num2 != 0) { // avoid division by zero
        printf("Quotient: %d\n", num1 / num2);
        printf("Remainder: %d\n", num1 % num2);
    } else {
        printf("Division and remainder not possible (denominator is zero).\n");
    }

    return 0;
}

