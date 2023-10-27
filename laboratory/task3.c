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
  if (file == NULL)
  {
    printf("Error opening file\n");
    exit(1);
  }
  uint16_t Magic_string;
  uint32_t HeaderVars[3];

  // LEYENDO LA CABECERA:
  read_print_header(file, &Magic_string, HeaderVars);

  // Tarea No. 3
  // Implementa un programa en C que lea el archivo binario e imprima el número de estudiantes distintos que se matricularon en al menos 1 clase por semestre, divididos por género y tipo de estudiante (estudiante de posgrado o estudiante de pregrado). Imprime los resultados en un formato similar a una tabla con seis columnas: Año, Semestre, Hombres de pregrado, Mujeres de pregrado, Hombres de posgrado, Mujeres de posgrado.

  Student student[HeaderVars[0]];
  fread(&student, sizeof(Student), HeaderVars[0], file);

  Course course[HeaderVars[1]];
  fread(&course, sizeof(Course), HeaderVars[1], file);

  Enrollment enrollment[HeaderVars[2]];
  fread(&enrollment, sizeof(Enrollment), HeaderVars[2], file);

  // Obtener años y semestres distintos
  // find_distinct

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

  int distinct_semester[4];
  int distinct_semester_count = 0;
  for (int i = 0; i < HeaderVars[2]; i++)
  {
    int semester = enrollment[i].Semester;
    int semester_found = 0;
    for (int j = 0; j < distinct_semester_count; j++)
    {
      if (distinct_semester[j] == semester)
      {
        semester_found = 1;
        break;
      }
    }
    if (!semester_found)
    {
      distinct_semester[distinct_semester_count] = semester;
      distinct_semester_count++;
    }
  }

  printf("Year  Semester  Male Undergrad  Female Undergrad  Male Grad  Female Grad\n");
  printf("-------------------------------------------------------------------------\n");
  for (int i = 0; i < distinct_years_count; i++)
  {
    int year = distinct_years[i];

    for (int j = 0; j < distinct_semester_count; j++)
    {

      int semester = distinct_semester[j];


      int maleUndergraduateCount = 0;
      int femaleUndergraduateCount = 0;
      int maleGraduateCount = 0;
      int femaleGraduateCount = 0;

      // Initializes all the values in the array to false using a for loop.
      int studentCounted[HeaderVars[0]];
      for (int k = 0; k < HeaderVars[0]; k++)
      {
        studentCounted[k] = 0;
      }

      for (int k = 0; k < HeaderVars[2]; k++)
      {
        if (enrollment[k].Year == year && enrollment[k].Semester == semester)
        {
          int student_id = enrollment[k].Student_id;

          short int gender = (student[student_id-1].Flags >> 7) & 1;
          short int level = (student[student_id-1].Flags >> 6) & 1;

          // If the boolean value at the index student_id is false, the code inside the conditional statement will be executed.
          if (!studentCounted[student_id-1])
          {
            if (level == 0)
            {
              if (gender == 0)
              {
                maleUndergraduateCount++;
              }
              else
              {
                femaleUndergraduateCount++;
              }
            }
            else
            {
              if (gender == 0)
              {
                maleGraduateCount++;
              }
              else
              {
                femaleGraduateCount++;
              }
            }
            studentCounted[student_id-1] = 1;
          }
        }
      }
      printf("%-8d %-10d %-18d %-10d %-10d %d\n", year, semester, maleUndergraduateCount, femaleUndergraduateCount, maleGraduateCount, femaleGraduateCount);
    }
  }

  fclose(file);
}
