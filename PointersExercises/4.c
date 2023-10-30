#include <stdio.h>i
int main() {
    int num = 0x45464748;  // ASCII for 'EFGH'
    unsigned char *p = (unsigned char *)&num + 1;
    printf("%c\n", *p);
    return 0;
}
// Este ejercicio es Big Endian 
// IMPRIME F
