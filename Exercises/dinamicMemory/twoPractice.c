#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct two_tables
{
  int *int_table;
  char *char_table;
};

void print_structure(struct two_tables *print){
  printf("int_table: %p\n", print->int_table);
  printf("char_table: %p\n", print->char_table);
}
void free_structure(struct two_tables *free_tables);
struct two_tables *new_struct(int new_int_table, int new_char_table)
{
  struct two_tables *new_struct = (struct two_tables *)malloc(sizeof(struct two_tables));

  if (new_struct == NULL)
  {
    return NULL;
  }

  new_struct->int_table = (int *)malloc(new_int_table * sizeof(int));
  new_struct->char_table = (char *)malloc(new_char_table * sizeof(char));

  if (new_struct->int_table == NULL || new_struct->char_table == NULL)
  {
    free_structure(new_struct);
  }

  return new_struct;
}
void free_structure(struct two_tables *free_tables)
{
  free(free_tables->int_table);
  free(free_tables->char_table);
  free(free_tables);
}
int main(){
  struct two_tables *my_struct = new_struct(5, 5);
  print_structure(my_struct);

  free_structure(my_struct);
  return 0;
}