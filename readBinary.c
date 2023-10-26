#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  char ch;
  int i;
  if (argc != 2)
  {
    printf("Usage: %s filename\n", argv[0]);
    exit(1);
  }
  if ((fp = fopen(argv[1], "rb")) == NULL)
  {
    printf("Can't open %s\n", argv[1]);
    exit(1);
  }
  i = 0;
  while (!feof(fp))
  {
    ch = fgetc(fp);
    printf("%02X ", ch);
    i++;
    if (i % 16 == 0)
    {
      printf("\n");
    }
  }
  fclose(fp);
  return 0;
}
// fwrite() escribe una cadena al archivo abierto para escritura.

// fwrite() toma tres argumentos:

// * Un puntero al archivo abierto para escritura.
// * Un puntero al búfer que contiene los datos a escribir.
// * El número de bytes a escribir.

// #include <stdio.h>

// int main() {
//   FILE *fp;
//   char str[] = "Esta es una cadena.";

//   fp = fopen("archivo.txt", "w");
//   fwrite(str, strlen(str), 1, fp);
//   fclose(fp);

//   return 0;
// }