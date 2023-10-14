// UNIONES:
// Una union es una estructura de datos que permite almacenar diferentes tipos de datos en una misma variable. Es decir, todas las variables van a apuntar a la misma dirección de memoria
// union U1 { uint a; }
// union U2 { uint a; uint b; }
// union U3 { uint a; uint b; uint c; }
// Se puede definir una union de la siguiente manera:
// union nombreUnion {
//     tipoDato1 nombreDato1;
//     tipoDato2 nombreDato2;
//     tipoDato3 nombreDato3;
//     ...
//     tipoDatoN nombreDatoN;
// };  <--- es necesario poner el punto y coma

#include <stdio.h>

union mi_union
{
    int entero;
    float flotante;
};

int main () {
  union mi_union mu;
  mu.entero = 100111441;
  mu.flotante = 2.4E16;
  printf("Entero: %d\n", mu.entero);
  printf("Flotante: %f\n", mu.flotante);
  return 0;
  
}

// Notese que al alterar la variable flotante el valor de la variable entera cambia, es decir se ve alterada ya que comparten espacio de memoria 
// Output:
// Entero: 1521125311
// Flotante: 24000000224657408.000000
