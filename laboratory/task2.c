#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "functions.h"

int main(int argc, char *argv[])
{

  if (argc != 2)
  {
    printf("Error");
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

  // Tarea No. 2
  //  Implementa un programa en C que calcule e imprima la edad promedio de los estudiantes que asisten a un curso específico.
  
  Student student[HeaderVars[0]];
  fread(&student, sizeof(Student),HeaderVars[0],file);

  Course course[HeaderVars[1]];
  fread(&course, sizeof(Course),HeaderVars[1],file);

  Enrollment enrollment[HeaderVars[2]];
  fread(&enrollment, sizeof(Enrollment),HeaderVars[2],file);

  printf("Course name                             Average Age\n");
  for (int i = 0; i < HeaderVars[1]; i++)
  {

    int sum = 0;
    int count = 0;
    for (int j = 0; j < HeaderVars[2]; j++)
    {
      if (enrollment[j].Course_id == course[i].Course_id)
      {
        for (int k = 0; k < HeaderVars[0]; k++)
        {
          if (enrollment[j].Student_id == student[k].Student_id)
          {
            sum += student[k].age;
            count++;
          }
        }
      }
    }
    printf("%-36s %11.2f\n", course[i].course_name, (float) sum/count);
  }


  fclose(file);
}
