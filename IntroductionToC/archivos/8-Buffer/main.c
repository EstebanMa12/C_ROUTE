// Buffers en C
//
// Un buffer es un espacio de memoria que se utiliza para almacenar datos temporalmente mientras se transfieren de un lugar a otro. Por ejemplo, cuando se lee un archivo, los datos se leen en un buffer desde el disco duro y luego se transfieren desde el buffer a la memoria principal. Esto se hace porque la memoria principal es mucho más rápida que el disco duro, por lo que es más eficiente leer datos en un buffer y luego transferirlos a la memoria principal.
//
// En C, un buffer se puede implementar como un arreglo de caracteres. Por ejemplo, el siguiente código crea un buffer de 100 caracteres:
//
// char buffer[100];
//
// Un buffer de línea almacena datos en un búfer hasta que se encuentra un carácter de nueva línea. Cuando se encuentra un carácter de nueva línea, el búfer se vacía y se envía a su destino. Por ejemplo, cuando se llama a la función printf, los datos se almacenan en un búfer de línea hasta que se encuentra un carácter de nueva línea. Cuando se encuentra un carácter de nueva línea, el búfer se vacía y se envía a la salida estándar.
//
// Full Buffer/File Buffer
//
// Un búfer completo almacena datos en un búfer hasta que el búfer está lleno. Cuando el búfer está lleno, el búfer se vacía y se envía a su destino. Por ejemplo, cuando se llama a la función fwrite, los datos se almacenan en un búfer completo hasta que el búfer está lleno. Cuando el búfer está lleno, el búfer se vacía y se envía al archivo.
//
// Un búfer de archivo es un búfer completo que se utiliza para almacenar datos en un archivo. Cuando se llama a la función fopen, se crea un búfer de archivo. Cuando se llama a la función fclose, el búfer de archivo se vacía y se envía al archivo.


#include <stdio.h>

int main(){
    // setvbuf sirve para controlar el buffer
    // setvbuf(stdout, buffer, tipo de biffer, tamaño del buffer);
    setvbuf(stdout, NULL, _IOFBF, 100); 
    printf("Hola mundo \n como estas dhiyhfeduiqwgfyqwvfqwv efmañana nos vemos ahusdhasuhchbhcd  adhbadbalsdbasljhdbasljhdbasldabd hbashjd");
    //  * La función fflush se utiliza para vaciar el búfer asociado con el archivo antes de cerrarlo.
    // fflush(stdout);
    while (1)
    {
    }
    
}