// typedef is a keyword in C programming that allows the programmer to create an alias for a data type. It is often used to make code more readable and easier to maintain. With typedef, you can create a new name for an existing data type, making it easier to use and understand. For example, instead of using unsigned long int every time you need an unsigned long integer, you can create an alias for it using typedef.
//
// To create a new name for a data type, typedef keyword is used as follows:
//
// typedef type newname;
#include <stdio.h>
#include <string.h>

enum tipo_empleado {Analista, Programador};
typedef enum tipo_empleado empleados;

struct empleado_t
{
  char nombre[20];
  char apellido[20];
  char telefono[10];
  empleados tipo;
};

typedef struct empleado_t Empleado;

void imprimir(Empleado* empleado){
  printf("%s %s\n", empleado->nombre, empleado->apellido);
  printf("%s\n", empleado->telefono);
  if(empleado->tipo == Analista){
    printf("Analista\n");
  }else{
    printf("Programador\n");
  }
}

int main(){
  Empleado empleado;
  strcpy(empleado.nombre, "Juan");
  strcpy(empleado.apellido, "Perez");
  strcpy(empleado.telefono, "123456789");
  empleado.tipo = Analista;
  imprimir(&empleado);
  return 0;
}

// Contras de typedef:
// 1. No se puede utilizar para definir tipos de datos compuestos
// 2. No se puede utilizar para definir tipos de datos abstractos
// 3. No se puede utilizar para definir tipos de datos que dependan de otros tipos de datos