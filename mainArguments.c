// Estos son los argumentos de main en el lenguaje C

// int main(int argc, char *argv[]) { ... }
// ¿Cuál es la función principal del programa? ¿Qué hace?
// La función `main()` es la función principal de un programa. La variable `argc` (argument count) es un entero
// que indica cuántos argumentos se pasaron al ejecutable cuando se llamó a este. El arreglo `argv[]` (
//   arguments vector) es una matriz que contiene cadenas de caracteres con los argumentos pasados
//   al ejecutable.
//   */

//  La variable argc como mínimo valdrá 1, ya que el nombre del programa se toma como primer argumento, almacenado con argv[0], que es el primer elemento de la matriz. Cada elemento del array apunta a un argumento de la línea de ódenes. Todos los argumentos de la línea de ordenes son cadenas.

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

  if (argc != 2)
  {
    printf("Ha olvidado su nombre.\n");
    exit(1);
  }
  printf("Hola %s \n", argv[1]);
}
