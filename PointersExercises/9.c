#include <stdio.h>
typedef struct {
int first_number;
int second_number;
} MyStruct;

int main() {
MyStruct my_struct;
char *ptr = (char*) &my_struct;

my_struct.first_number = 0x11223344;
my_struct.second_number = 0xAABBCCDD;

printf("%02X", *(ptr + 7));
}

// Imprime FFFFFFAA