
// For example, if you have a pointer ptr pointing to an integer, you can increment it using ptr++ which will move the pointer to the next integer in memory. Similarly, you can decrement it using ptr-- which will move the pointer to the previous integer in memory.

// It's important to note that the size of the increment or decrement depends on the data type that the pointer is pointing to. For example, if the pointer is pointing to an integer, incrementing it will move it by 4 bytes (assuming a 32-bit system), while if it's pointing to a character, incrementing it will move it by 1 byte.

// The following example demonstrates how to use the increment and decrement operators: 

#include <stdio.h>

int main() {
    int i = 10;
    char c = 'a';
    int *ptr_i = &i;
    char *ptr_c = &c;

    printf("ptr_i = %p, ptr_c = %p\n", ptr_i, ptr_c);
    ptr_i++;
    ptr_c++;
    printf("ptr_i = %p, ptr_c = %p\n", ptr_i, ptr_c);
    ptr_i--;
    ptr_c--;
    printf("ptr_i = %p, ptr_c = %p\n", ptr_i, ptr_c);

    return 0;
}