// Dynamic memory allocation allows you to allocate memory at runtime, which means that you can allocate memory as needed during program execution. This is done using functions like malloc(), calloc(), and realloc().
// The malloc() function allocates a single block of memory in the heap memory. It is declared in the stdlib.h header file.
// The free() function frees the allocated memory. It is declared in the stdlib.h header file.
// The exit() function terminates the program. It is declared in the stdlib.h header file.


#include <stdio.h>
#include <stdlib.h>
/*
 * This program dynamically allocates memory for an array of floats based on user input.
 * It prompts the user to enter the number of elements to be stored in the array, allocates memory using malloc,
 * initializes the array with a default value of 5.5E55, and then frees the allocated memory.
 */
int main(void) {
  printf("Ingrese el número de datos que desea guardar dinamicamente: ");
  int tamanio = scanf("%d",&tamanio);
  float *ptr = (float*)malloc(tamanio*sizeof(float));
  if (ptr == NULL) {
    printf("Memory not allocated.\n");
    exit(0);
  }
  else {
    printf("Memory successfully allocated using malloc.\n");
  }
  for(int i =0 ; i<tamanio;i++){
    ptr[i]= 5.5E55;
  }
  printf("Se acaban de agregar los %d datos\n", tamanio);
  free(ptr);
  return 0;
  };