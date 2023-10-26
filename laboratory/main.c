#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "functions.h"2


typedef  struct {
  uint32_t Student_id;
  uint8_t Flags; // F: 1 es femenino / 0 masculino
                  // G: 1 posgrado / 0 pregrado (?)
  char student_name[23];// Formato ascii
  uint32_t age;//Little endian
} Student;


typedef struct 
{
  uint32_t Course_id;
  uint8_t Flags;
  char course_name[32];
  uint32_t credits;
} Course;

typedef struct {
  uint32_t Student_id;
  uint32_t Course_id;
  uint32_t Year; // little endian 
  uint32_t Semester;
} Enrollment;


int main(int argc, char *argv[]){

  if (argc != 3){
    printf("Error: Debe ingresar el rango de edades y el nombre del archivo binario\n");
    exit(1);
  }

  FILE *file = fopen("sample_data.bin", "rb");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  //LEYENDO LA CABECERA:
  read_print_header(file);

  // Tarea No. 1
  // Leer los datos de los estudiantes e e imprima los nombres, edades y géneros de todos los estudiantes dentro de un rango de edades. El rango de edades y el nombre del archivo binario se proporcionarán como argumentos de línea de comandos. El filtro de edades debe incluir los argumentos de límite superior e inferior.
  Student student;
  uint32_t age_min = atoi(argv[1]);
  uint32_t age_max = atoi(argv[2]);
  printf("Rango de edades: %d - %d\n", age_min, age_max);




  fclose(file);




}

