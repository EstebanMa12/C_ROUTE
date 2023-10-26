#pragma once
#include <stdint.h>
#include <stdio.h>

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
  char course_name[32];
  uint32_t credits;
} Course;

typedef struct {
  uint32_t Student_id;
  uint32_t Course_id;
  uint32_t Year; // little endian 
  uint32_t Semester;
} Enrollment;

void read_print_header(FILE *file, uint16_t *Magic_string, uint32_t HeaderVars[3]);
uint32_t le_host(uint32_t value) ;
uint16_t le_h16(uint16_t value);
uint16_t le_h16(uint16_t value) ;

int* find_distinct(int* arr, int len, int* distinct_count);

