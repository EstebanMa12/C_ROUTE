#include <stdio.h>
int main() {
    int num = 0x12345678;
    unsigned char *p = (unsigned char *)&num;
    printf("%c\n", *p);
    return 0;
}
// En formato big endian imprime 12
// En formato little endian imprime 78
