#include <stdio.h>
#include <string.h>
#include "empleados.h"

void print_empleado(Empleado* empl){
  char *cargo;
  
  printf("------Empleado---------------------------------------|\n");
  printf("|   Nombre: %-40s |\n", empl -> nombre);
  printf("| Apellido: %-40s |\n", empl -> apellido);
  printf("|      PID: %-40s |\n", empl -> identificador);
  switch(empl -> cargo){
    case ANALISTA:
      cargo = "Analista";
      break;
    case DESARROLLO:
      cargo = "Desarrollo";
      break;
    case SISTEMAS:
      cargo = "Sistemas";
      break;
  }
  printf("|    Cargo: %-40s |\n", cargo);
  printf("-----------------------------------------------------|\n");
}