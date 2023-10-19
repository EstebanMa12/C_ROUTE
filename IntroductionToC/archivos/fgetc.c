// fgetc() La función fgetc() se utiliza normalmente para leer caracteres de un archivo. Para ello, se abre el archivo con la función fopen() y luego se llama a fgetc() para leer los caracteres del archivo. Los caracteres leídos se pueden almacenar en una variable o en un búfer.
// ! fgetc devuelve un char pero que esta casteado a un entero

#include <stdio.h>

int main()
{
  // Open file in read and write mode
  FILE *archivo = fopen("archivo_de_prueba.data", "r+");

  // Check if file exists
  if (!archivo)
  {
    printf("El archivo no existe!!!!");
    return 1;
  }

  // Read character from file
  int leido = fgetc(archivo);

  // Loop until end of file
  while (leido != EOF)
  {
    printf("%c", (char)leido);
    leido = fgetc(archivo);
  }

  printf("\n ==FIN==\n");

  // Close file
  fclose(archivo);
}