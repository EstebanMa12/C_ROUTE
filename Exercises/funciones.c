#include <stdio.h>
#include "Array_management.h"

void insertar_inicio(int *array, int *prt_size, int valor){
  int i;
  for(i=*prt_size; i>0; i--){
    array[i] = array[i-1];
  }
  array[0] = valor;
  *prt_size = *prt_size + 1;
}
void insertar_fin(int *array, int *prt_size, int valor){
  array[*prt_size] = valor;
  *prt_size = *prt_size + 1;
}

void insertar_posicion(int *array, int *prt_size, int valor, int posicion){
  int i;
  for(i=*prt_size; i>posicion; i--){
    array[i] = array[i-1];
  }
  array[posicion] = valor;
  *prt_size = *prt_size + 1;
}

void eliminar_inicio(int *array, int *prt_size_array){
  int i;
  for(i=0; i<*prt_size_array; i++){
    array[i]= array[i+1];
  }
  *prt_size_array = *prt_size_array - 1;
}
void eliminar_final(int *array, int *prt_size_array){
  *prt_size_array = *prt_size_array - 1;
}

void eliminar_en_i(int *array, int *prt_size_array, int posicion){
  int i ;
  for(i=posicion; i<*prt_size_array; i++){
    array[i]= array[i+1];
  }
  *prt_size_array = *prt_size_array - 1;
}

void actualizar(int *array, int *prt_size_array, int posicion, int valor){
  array[posicion] = valor;
}
void imprimir(int *array, int *prt_size_array){
  int i;
  for(i=0; i<*prt_size_array; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
}

void imprimir_pointer(int *array, int *prt_size_array){
  int *ptr = array;
  int *end = array + *prt_size_array;
  while (ptr < end) {
    printf("%d ", *ptr);
    ptr++;
  }
  printf("\n");
}
int buscar(int *array, int *prt_size_array, int valor ){
  int i =0; 
  while (i < *prt_size_array)
  {
    if(array[i]==valor){
      return i;
    }
    i++;
  }
  return -1;
}
int buscar2(int *array, int *prt_size_array, int valor ){
  int i ; 
  for(i=0; i<*prt_size_array; i++){
    if(array[i]==valor){
      return i;
    }
  }
  return -1;
}