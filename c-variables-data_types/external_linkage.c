/* EXTERNAL LINKAGE */
#include <stdio.h>
int number = 42;  
int main() {
    printf("Global number: %d\n", number);
    return 0;
}
/*
It has  external linkage because it allowsmsharing of the global variable across multiple files.
*/
