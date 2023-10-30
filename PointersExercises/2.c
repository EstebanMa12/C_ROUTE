#include <stdio.h>
int main() {
    int num = 0x41424344;  // ASCII for 'ABCD'
    unsigned char *p = (unsigned char *)&num;
    printf("%c\n", *p);
    return 0;
}
// Este ejercicio es Big Endian
//IMPRIME A