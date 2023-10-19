#include <stdio.h>
#include <stdlib.h>

enum Color { RED, GREEN, BLUE };

// Function to convert enum to int
int enumInt(enum Color color) {
    // Cast enum to int
    int colorAsInt = (int)color;
    // Print the integer value
    printf("[enumInt]:                 The color as int: %d\n", colorAsInt);
    // Return the integer value
    return colorAsInt; 
}

void printCharFromIntPointer(int *intPtr) {
  char *charPtr = (char*)intPtr; // Casting int pointer to char pointer
  printf("[printCharFromIntPointer]: Value of charPtr: %c\n", *charPtr);
}

void print_char(char c) {
    printf("[print_char]:              The character is %c\n", c);
}


int main() {
    enumInt(BLUE);  // Capture the result returned by enumInt

    int *intPtr = (int*)malloc(sizeof(int)); // Allocate memory for an int
    *intPtr = 0x41424344; // Assign the value 0x41424344 to the int
    printCharFromIntPointer(intPtr); // Print the value of the int as a char
    free(intPtr); // Free allocated memory

    int num = 65;
    print_char((char)num);

    return 0;
}
