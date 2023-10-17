// ARCHIVOS DE CABECERA 

// Los archivos de cabecera son archivos que contienen declaraciones de funciones y constantes que se pueden incluir en un programa.
// Los archivos de cabecera tienen la extensión .h.
// Los archivos de cabecera se incluyen en un programa usando la directiva #include.
// Los archivos de cabecera se pueden incluir en un programa usando la directiva #include con comillas dobles o con corchetes angulares.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum cargo_t{
  ANALISTA, DESARROLLO, SISTEMAS
}Cargo;

typedef struct empleado_t{
  char nombre[30];
  char apellido[40];
  char identificador[9];
  Cargo cargo;
}Empleado;

void print_empleado(Empleado *empl){
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

int main(){
  Empleado e;
  strncpy(e.nombre, "Juan", 30);
  strncpy(e.apellido, "Perez",40);
  strncpy(e.identificador, "12345678",9);
  e.cargo = ANALISTA;
  print_empleado(&e);
  return 0;
}