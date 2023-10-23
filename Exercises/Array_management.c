#include <stdio.h>
#include "Array_management.h"
#define SIZE 10

int i;
 int main(){
  int array[SIZE];
  int size_array = 0;
  int *ptr_size_array = &size_array;
  for(i = 0; i < 5; i++){
    array[i]=i+1;
    *(ptr_size_array) +=1;
  }
  imprimir(array, ptr_size_array);

  insertar_inicio(array, ptr_size_array, 8);
  insertar_fin(array, ptr_size_array, 6);
  insertar_posicion(array, ptr_size_array, 7, 3);
  printf("Array: ");
  imprimir(array, ptr_size_array);
  printf("\n");

  eliminar_en_i(array, ptr_size_array, 3);
  eliminar_final(array, ptr_size_array);
  eliminar_inicio(array, ptr_size_array);
  printf("Array: ");
  imprimir(array, ptr_size_array);
  printf("\n");

  return 0;
}