/* CONSTANT CHALLENGE*/
#include <stdio.h>

int main() {
    const int num = 10;   
    num = 20;  
 printf("Number: %d\n", num);

    return 0;
}
/* error: assignment of read-only variable ‘num’
     num = 20;
*/         ^

