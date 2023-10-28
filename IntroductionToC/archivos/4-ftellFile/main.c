#include <stdio.h>

//  This function is used to determine the current position in the file where the next read or write operation will occur.

// The ftell function takes a single argument, which is a pointer to a FILE structure that specifies an input stream.

// The return value of the ftell function is a long integer that represents the current value of the file position indicator. If an error occurs, the ftell function returns -1.


int main(){
  FILE *archivo = fopen("archivo_de_prueba.data","r");
  if (!archivo){
    printf("El archivo no existe!!!!");
    return 1;
  }
  int car = fgetc(archivo);
  long pos= ftell(archivo); // Recuperamos la posición del cursor en el archivo
  while (car!=EOF){
    printf("posición: %ld, caracter: %c\n",pos,(char)car);
    car = fgetc(archivo);
    pos= ftell(archivo);
  }
  fclose(archivo);
}