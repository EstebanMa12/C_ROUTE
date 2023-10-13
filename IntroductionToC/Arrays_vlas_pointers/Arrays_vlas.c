// ARRAYS : 
// 1. Arrays are collection of similar data items stored in contiguous memory locations.
// 2. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
// 3. Arrays can be of two types: one-dimensional and multi-dimensional.

#include <stdio.h>

int main(){
  int edades[8];
  for (int i=0; i<8 ; i++){
    printf("Introduce la edad de la persona %d: ", i+1);

    // La función scanf() en C se utiliza para leer datos de la entrada estándar (stdin) y almacenarlos en variables.

    // La función scanf() toma una cadena de formato como su primer argumento, y un puntero a la primera variable a la que se le asignará un valor como su segundo argumento. La cadena de formato especifica el tipo de datos de cada variable a la que se le asignará un valor.
    scanf("%d", &edades[i]);
  }
  for (int i = 0; i < 8; i++)
  {
    printf("La edad de la persona %d es %d\n", i+1, edades[i]);
  }
  return 0;
  
}

// Ejemplo de inline inicialization de un array: 
// int edades[5] = {10, 20, 30, 40, 50};

// VLA
// 1. VLA stands for Variable Length Array.
// 2. VLA is a type of array whose length is determined at run time.
// 3. VLA is a feature introduced in C99 standard.
// 4. VLA is allocated on stack.
// 5. VLA is allocated memory at run time.
// Example:
// int n;
// scanf("%d", &n);
// int arr[n]; // VLA

// los identificadores de un array no identifican al array como tal sino que identifican punteros, es decir, apunta a la dirección de memoria de los elementos del array

