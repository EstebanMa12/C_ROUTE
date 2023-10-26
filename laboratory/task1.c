#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "functions.h"



int main(int argc, char *argv[]){

  if (argc != 4){
    printf("Error: Debe ingresar el rango de edades y el nombre del archivo binario\n");
    exit(1);
  }

  FILE *file = fopen(argv[1], "rb");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  uint16_t Magic_string;
  uint32_t HeaderVars[3];

  //LEYENDO LA CABECERA:
  read_print_header(file, &Magic_string, HeaderVars);


  // Tarea No. 1
  // Leer los datos de los estudiantes e e imprima los nombres, edades y géneros de todos los estudiantes dentro de un rango de edades. El rango de edades y el nombre del archivo binario se proporcionarán como argumentos de línea de comandos. El filtro de edades debe incluir los argumentos de límite superior e inferior.
  Student student;
  uint32_t age_min = atoi(argv[2]);
  uint32_t age_max = atoi(argv[3]);
  printf("Rango de edades: %d - %d\n", age_min, age_max);
  printf("----------------------------------------------\n");
  printf("Name                      Age       Gender\n");
  int students_count = 0;
  while (fread(&student, sizeof(Student), 1, file) == 1){
    if (student.age >= age_min && student.age <= age_max){
      short int gender = (student.Flags >> 7) & 1;
      short int level = (student.Flags >> 6) & 1; 
      printf("%-18s        %-5d    %s\n", student.student_name, student.age, gender == 1 ? "Female" : "Male");
      students_count++;
    }
  }
  printf("Number of student matches: %d \n", students_count);





  fclose(file);




}

