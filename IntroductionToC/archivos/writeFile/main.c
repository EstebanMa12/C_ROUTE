#include <stdio.h>

int main() {
  FILE *fp;
  char str[] = "This is a string to be written to a file 3.\n";
  int i;

  fp = fopen("archivo_de_prueba.data", "a+");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Write each character of the string using fputc
  for (i = 0; str[i] != '\0'; i++) {
    fputc(str[i], fp);
  }

  // Write the entire string using fputs
  fputs(str, fp);

  fclose(fp);
  return 0;
}
