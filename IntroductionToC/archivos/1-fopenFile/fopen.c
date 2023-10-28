#include <stdio.h>

int main(){
  FILE *archivo = fopen("archivo_de_prueba.data","r+");
  if (!archivo){
    printf("El archivo no existe!!!!");
    return 1;
  }

  fclose(archivo);
}
// fopen() is a standard library function in C programming language that is used to open a file.
// fopen() returns a pointer to a FILE structure, which is used to identify the stream on all further operations involving the file. If the file cannot be opened, fopen() returns NULL.


