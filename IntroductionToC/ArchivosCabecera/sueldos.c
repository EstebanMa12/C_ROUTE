#include "sueldos.h"
#include <stdio.h>

void pagar_sueldos(Empleado* e){
  int sueldo = 2000;
  printf("El sueldo de %s %s es de %d\n", e -> nombre, e -> apellido, sueldo);
}