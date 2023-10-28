#include <stdio.h>

// tmpfile
// tmpfile() is a standard C library function that is used to create a temporary file. It takes no arguments and returns a FILE pointer to the temporary file. The temporary file is created in binary read/write (w+b) mode. The file is automatically deleted when the program terminates.

int main() {
  FILE *fp = tmpfile();
  if (fp == NULL) {
    printf("Failed to create temporary file.\n");
    return 1;
  }

  //fprintf() is a standard C library function that is used to write formatted output to a file. It takes a FILE pointer and a format string as arguments and returns the number of characters written to the file.
  fprintf(fp, "This is a temporary file.\n");

  // rewind() is a standard C library function that is used to set the file position indicator to the beginning of the file. It takes a FILE pointer as an argument and returns no value.
  rewind(fp);
  char buffer[100];
  fgets(buffer, 100, fp);
  printf("Contents of temporary file: %s", buffer);
  fclose(fp);
  return 0;
}
