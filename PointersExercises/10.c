#include <stdio.h>

typedef struct {
    char a;
    int  b;
    short c;
} MyNewStruct;

int main() {
    MyNewStruct s;
    char *ptr = (char*) &s;

    s.a = 0xAB;    
    s.b = 0x11923344;
    s.c = 0x8001;   

    printf("%02X", (int)*(short*)(ptr + 5));
}
