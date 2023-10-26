#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "functions.h"



int main(int argc, char *argv[]){

  if (argc != 4){
    printf("Error: Debe ingresar el rango de edades y el nombre del archivo binario\n");
    exit(1);
  }

  FILE *file = fopen(argv[1], "rb");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  //LEYENDO LA CABECERA:
  read_print_header(file);
  printf("----------------------------------------------\n");



  fclose(file);




}
