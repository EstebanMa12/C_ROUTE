#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "functions.h"

int main(int argc, char *argv[])
{

  if (argc != 2)
  {
    printf("Error - the script is only allowed to take 2 arguments");
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


  //Tarea No. 3
  //Implementa un programa en C que lea el archivo binario e imprima el número de estudiantes distintos que se matricularon en al menos 1 clase por semestre, divididos por género y tipo de estudiante (estudiante de posgrado o estudiante de pregrado). Imprime los resultados en un formato similar a una tabla con seis columnas: Año, Semestre, Hombres de pregrado, Mujeres de pregrado, Hombres de posgrado, Mujeres de posgrado.

  Student student[HeaderVars[0]];
  fread(&student, sizeof(Student),HeaderVars[0],file);

  Course course[HeaderVars[1]];
  fread(&course, sizeof(Course),HeaderVars[1],file);

  Enrollment enrollment[HeaderVars[2]];
  fread(&enrollment, sizeof(Enrollment),HeaderVars[2],file);


  int distinct_years[10];
  int distinct_years_count = 0;
  for (int i = 0; i < HeaderVars[2]; i++)
  {
    int year = enrollment[i].Year;
    int year_found = 0;
    for (int j = 0; j < distinct_years_count; j++)
    {
      if (distinct_years[j] == year)
      {
        year_found = 1;
        break;
      }
    }
    if (!year_found)
    {
      distinct_years[distinct_years_count] = year;
      distinct_years_count++;
    }
  }

  int semester_count = 0;
  for (int i = 0; i < distinct_years_count; i++)
  {
    for (int j = 0; j < HeaderVars[2]; j++)
    {
      if (enrollment[j].Year == distinct_years[i])
      {
        int semester = enrollment[j].Semester;
        int semester_found = 0;
        printf("Semester: %d\n",semester);
      }
    }
    
  }
  
  // Print distinct years
  // printf("Year  ");
  // for (int i = 0; i < distinct_years_count; i++)
  // {
  //   printf("%d  ", distinct_years[i]);
  // }
  

  fclose(file);
}
