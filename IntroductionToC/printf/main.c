#include <stdio.h>

//printf() a diferencia de los otros metodos printf permite imprimir variables, ya que la f representa format
// de esta forma se puede utilizar de una manera más avanzada para imprimir valores de tipo que no son cadenas de caracteres  
// %d imprime un valor de tipo entero
// %f imprime un valor de tipo flotante
// %c imprime un valor de tipo caracter
// %s imprime un valor de tipo cadena de caracteres
// %x imprime un valor de tipo hexadecimal
// %o imprime un valor de tipo octal
// %e imprime un valor de tipo exponencial
// %g imprime un valor de tipo flotante o exponencial
// %p imprime un valor de tipo puntero
// %u imprime un valor de tipo entero sin signo
// %i imprime un valor de tipo entero
// %hd imprime un valor de tipo entero corto
// %ld imprime un valor de tipo entero largo
// %Lf imprime un valor de tipo double largo
// %lu imprime un valor de tipo entero sin signo largo
// %li imprime un valor de tipo entero largo
// %hu imprime un valor de tipo entero corto sin signo
// %hi imprime un valor de tipo entero corto

// Por debajo printf() lo que hace es convertir todo a caracteres ASCII de una manera que sea coherente 
// con el tipo de dato que se le pasa como argumento



int main(void) {
    char letra = 'b';
    char *cadena = "Soy una cadena";
    printf("El caracter es: %c\n",letra);

    // Esta es la mejor forma de escribir cadenas de caracteres
    printf("%s\n",cadena);

    int numero = 1234545;
    printf("El numero es: %d\n",numero);
    // Una aclaración es que los char también pueden ser tratados como número 
    // ya que en realidad son números que representan un caracter en ASCII
    printf("El caracter es: %d\n",letra);
    // Por alguna razón el placeholder i también lo toma como d
    printf("El caracter es: %i\n",letra);

    int signedNum = -32;
    printf("El numero es: %d\n",signedNum);
    // El placeholder u imprime un número sin signo
    printf("El numero es: %u\n",signedNum);
    // Output: 4294967264  Lo que pasa es que lo convierte a un binario puro
    // y luego lo convierte a un número sin signo
    // complemento a2
    // 32 = 00000000000000000000000000100000
    // 32 = 11111111111111111111111111011111
    // 32 = 4294967264

    long longNumber= 12345678979856451;
    printf("El numero es: %ld\n",longNumber);

}