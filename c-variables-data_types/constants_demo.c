/* CONSTANTS TWO WAYS*/
#include <stdio.h>
#define PI1 3.14   
int main() {
    const float PI2 = 3.14;   
    printf("PI using #define: %f\n", PI1);
    printf("PI using const: %f\n", PI2);
    return 0;
}
