// Bit manipulation in c language:
// C dispone de operadores booleanos que permiten transformar los bits que componen un valor numérico.
//
// Los operadores booleanos son:
//

// 1. Bitwise AND operator &
// 2. Bitwise OR operator |
// 3. Bitwise XOR operator ^
// 4. Bitwise NOT operator ~
// 5. Left shift operator <<
// 6. Right shift operator >>
#include <stdio.h>

// Function to set a bit at a specified position to 1
unsigned int setBit(unsigned int num, int pos) {
  return num | (1u << pos); // Use 1u to ensure it's treated as an unsigned int
}

// Function to print the binary representation of an unsigned int
void printBinary(unsigned int num) {
  if (num > 1) {
    printBinary(num >> 1);
  }
  printf("%u", num & 1);
}

int main() {
  unsigned int num = 0;
  int pos = 0;

  printf("Enter a number: ");
  scanf("%u", &num); // Use %u for unsigned int
  printf("Enter a position: ");
  scanf("%d", &pos);

  printf("The number %u in binary is: ", num);
  printBinary(num);
  printf("\n");

  unsigned int modifiedNum = setBit(num, pos);

  printf("The number %u with bit %d set to 1 in binary is: ", num, pos);
  printBinary(modifiedNum);
  printf("\n");

  return 0;
}


// MASCARAS DE BITS
//
// Una máscara de bits es un valor numérico que se utiliza para aplicar operaciones booleanas a un valor numérico.
//
// Por ejemplo, si queremos poner a 1 el bit 3 de un valor numérico, podemos utilizar una máscara de bits.
//
// La máscara de bits es un valor numérico que tiene todos los bits a 0 excepto el bit que queremos poner a 1.
