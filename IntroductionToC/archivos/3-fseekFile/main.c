#include <stdio.h>

// The `fseek` function in C is used to set the file position indicator for a file stream. This function allows you to move the file pointer to a specific position in the file.


// int fseek(FILE *stream, long int offset, int whence);

// The `fseek` function returns a non-negative value if successful. Otherwise, it returns a negative value and sets the error indicator for the stream.


// - `SEEK_SET`: The offset is from the beginning of the file.
// - `SEEK_CUR`: The offset is from the current position in the file.
// - `SEEK_END`: The offset is from the end of the file. The values are in negative



#include <stdio.h>

int main(){
 FILE *archivo = fopen("archivo_de_prueba.data","r"); // Open file
 if (!archivo){
    printf("El archivo no existe!!!!"); // File not found
    return 1;
 }
 fseek(archivo,0,SEEK_END); // Move cursor to end of file
 long pos= ftell(archivo); // Get position of cursor in file

 rewind(archivo); // Move cursor to beginning of file

 printf("El archivo tiene %ld bytes\n", pos); // Print file size in bytes

 fclose(archivo); // Close file
}