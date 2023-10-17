//MACROS
//Las macros son una forma de definir constantes que se sustituyen por su valor en tiempo de compilación.
//Las macros se definen con la directiva #define.
//Las macros se pueden definir con argumentos.
//Las macros se pueden definir con argumentos de tipo variable.
//Las macros se pueden definir con argumentos de tipo variable y con argumentos de tipo variable.

#include <stdio.h>

#define AREA_RECTANGULO(x, y) (x*y)

int main(void) {
  int x = 5, y = 6;
  printf("El área del rectángulo es: %d\n", AREA_RECTANGULO(x, y));
  return 0;
}