#include <stdio.h>


struct two_tables 
{
    int *int_table;
    char *char_table;
};

struct two_tables *new_struct(int new_int_table, int new_char_table){
    struct two_tables *new_struct = (struct two_tables *)malloc(sizeof(struct two_tables));

    if (new_struct == NULL){
        return NULL;
    }

    new_struct -> int_table = (int *)malloc(new_int_table*sizeof(int));
    new_struct -> char_table = (char *)malloc(new_char_table*sizeof(char));

    if (new_struct->int_table==NULL || new_struct -> char_table==NULL){
      free_structure(new_struct);
    }

    return new_struct;

}
void free_structure(struct two_tables *free_tables){
    free(free_tables -> int_table);
    free(free_tables -> char_table);
    free(free_tables);
}