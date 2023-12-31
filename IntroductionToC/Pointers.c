#include <stdio.h>

//! PUNTEROS
// Un puntero es una variable que almacena la dirección de memoria de otra variable.
// Un puntero se declara con un asterisco (*).
// Un puntero se inicializa con la dirección de memoria de una variable existente.
// Un puntero se puede asignar a una variable de tipo void.
// Un puntero se puede asignar a una variable de tipo int.
// Un puntero se puede asignar a una variable de tipo char.

void jugar(int *n)
{
  // Cuando ponemos el asterisco a la izquierda de la variable estamos recuperando el valor que hay en el puntero

  // y cuando lo ponemos a la derecha estamos recuperando el valor de la variable a la que apunta el puntero. Ejemplo : int* n

  // Se obtiene el valor del puntero
  int y = *n;

  // Se calcula el nuevo valor
  y = (y + 2) / 2 + (3 * y) / 15;

  // Se asigna el nuevo valor al puntero
  *n = y;
}

int main()
{
  // Declare an integer variable named num and initialize it to 25
  int num = 25;

  // Declare an integer pointer named ptr and initialize it to point to num
  int *ptr;
  ptr = &num;

  // Print the value of num
  printf("Value of num: %d\n", num);

  // Print the address of num
  printf("Address of &num: %p\n", &num);

  // Print the value of ptr
  printf("Value of ptr: %p\n", ptr);

  // Print the address of ptr itself
  printf("Address of &ptr: %p\n", &ptr);

  // Print the value that ptr is pointing to
  printf("Value that *ptr ins pointing to: %d\n", *ptr);
  printf("-----------------------------------------\n");
  printf("Jugando con el número: \n");
  jugar(&num);
  printf("Value of num: %d\n", num);

  // La direccion de memoria sigue siendo la misma

  printf("Address of &num: %p\n", &num);

  return 0;
}
