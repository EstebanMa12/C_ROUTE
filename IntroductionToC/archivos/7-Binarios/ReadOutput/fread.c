#include <stdio.h>

struct medicion
{
  unsigned short anio;
  unsigned char mes;
  unsigned char dia;
  float temperatura;
  unsigned char uv;
  float viento;
};

void print_medicion(struct medicion *medicion){
  printf("Fecha: %d-%d-%d, Registro %.2fºC. UV %d, VIento %.2f km/h\n",
  medicion->anio,
  medicion->mes,
  medicion->dia,
  medicion->temperatura,
  medicion->uv,
  medicion->viento);
}

int main() {
  struct medicion medida ;
  
  printf("-----------------Medición antes de ser leida --------------------\n");
  
  print_medicion(&medida);


  FILE *fp = fopen("mediciones.bin","rb");

  int total=fread(&medida, sizeof(struct medicion), 1, fp);
  if (total!=1){
    printf("Error de lectura");
  }
  fclose(fp);

  printf("--------------------Medición leida -------------------- \n");
  print_medicion(&medida);
  
}
// The `fread` function in C is used to read data from a file into a buffer. It returns the number of items successfully read, which may be less than the number requested if an error or end-of-file is encountered.

// The `fread` function takes four arguments:
// a pointer to the data you want to read into (in this case, &medida),
// the size of each item to read (in this case, sizeof(struct medicion)),
// the number of items to read (in this case, 1), and
// a pointer to the file you want to read from (in this case, fp).
//
// size_t fread(void *ptr, size_t size, size_t count, FILE *stream);

// Parameters:

// - `ptr`: Pointer to a block of memory with a size of at least (size*count) bytes, where the read data will be stored.
// - `size`: Size, in bytes, of each element to be read.
// - `count`: Number of elements, each one with a size of size bytes, to be read.
// - `stream`: Pointer to a FILE object that specifies an input stream.

// Return Value:

// - The function returns the number of items successfully read, which may be less than the number requested if an error or end-of-file is encountered.