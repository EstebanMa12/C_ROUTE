//  remove() is a built-in function that is used to delete a file from the file system. It takes a filename as an argument and returns 0 if the file is deleted successfully, otherwise it returns a non-zero value.

#include <stdio.h>

int main() {
  char filename[] = "example.txt";
  int status = remove(filename);
  if (status == 0) {
    printf("%s was deleted successfully.\n", filename);
  } else {
    printf("Unable to delete %s.\n", filename);
  }
  return 0;
}
