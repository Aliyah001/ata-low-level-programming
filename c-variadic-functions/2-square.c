#include <stdio.h>#

 
#include "square.h"

int main(void)
{
    // Array of values to test
    int test_values[] = {5, 10, -3, 0};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    int i;

    printf("Testing the inline square function:\n");
    
    // Iterate through the test values and call the inline function
    for (i = 0; i < num_tests; i++)
    {
        int val = test_values[i];
        int result = square(val); // The compiler attempts to inline this call
        printf("Square of %d is %d\n", val, result);
    }

    return 0;
}
