// ARCHIVOS DE CABECERA 

// Los archivos de cabecera son archivos que contienen declaraciones de funciones y constantes que se pueden incluir en un programa.
// Los archivos de cabecera tienen la extensión .h.
// Los archivos de cabecera se incluyen en un programa usando la directiva #include.
// Los archivos de cabecera se pueden incluir en un programa usando la directiva #include con comillas dobles o con corchetes angulares.
#include <stdio.h>
#include <string.h>

// No puedes duplicar un .c en un .c porque es muy caótico
// #include "empleados.c"
// Lo que hay que hacer es importar una versión minificada de solamentes contiene definiciones de estructuras y prototipos 
// de funciones, pero no contiene implementaciones de funciones.
// Este es un prototipo => void print_empleado(Empleado *empl);
// Todo eso se pone en un archivo especial denominado archivo cabecera --> Este es un archivo que contiene prototipos y typedef's
// Los archivos de cabecera tienen la extensión .h.

// Entonces se hacen distinciones a los archivos que se tienen, los Headers (.h)  y todos los sources (.c)
// Los archivos de cabecera se incluyen en un programa usando la directiva #include.

#include "empleados.h"
#include "sueldos.h"



int main(){
  Empleado e;
  strncpy(e.nombre, "Juan", 30);
  strncpy(e.apellido, "Perez",40);
  strncpy(e.identificador, "12345678",9);
  e.cargo = ANALISTA;
  print_empleado(&e);
  pagar_sueldos(&e);
  return 0;
}


// Para correrlo en vscode: gcc empleados.c Archivos_de_cabecera.c -o prueba
// ./prueba
// Para correrlo en terminal: gcc empleados.c Archivos_de_cabecera.c -o prueba