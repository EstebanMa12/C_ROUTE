// fgets is a function in C programming language that is used to read a line from a file. It takes three arguments: a pointer to a character array where the line read is stored, the maximum number of characters to be read, and a pointer to the file to be read from.
// The function returns a pointer to the character array where the line is stored. If an error occurs or the end of the file is reached before any characters are read, fgets returns a null pointer.

#include <stdio.h>

int main(){
  FILE *archivo = fopen("archivo_de_prueba.data","r+");
  if (!archivo){
    printf("El archivo no existe!!!!");
    return 1;
  }
  char linea[50];
  char *ref = fgets(linea,50,archivo);
  if (ref){
    printf("%s",linea);
  }

  fclose(archivo);
}