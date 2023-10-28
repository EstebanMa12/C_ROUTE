//rename is a standard C library function that is used to rename a file or directory. It takes two arguments: the current name of the file or directory, and the new name that you want to give it. The function returns 0 on success and -1 on failure.

#include <stdio.h>

int main(){
  char oldname[] = "example.txt";
  char newname[] = "newname.txt";
  int status = rename(oldname, newname);
  if (status == 0) {
    printf("%s was renamed to %s\n", oldname, newname);
  } else {
    printf("Unable to rename the file.\n");
  }
  return 0; 
}