#include <stdlib.h>

struct two_tables 
{
    int *int_table;
    char *char_table;
};

struct two_tables *crearStructConTablas(int tam_int, int tam_char) {
    struct two_tables *nuevaStruct = (struct two_tables *)malloc(sizeof(struct two_tables));

    if (nuevaStruct == NULL) {
        // Manejo de error si malloc falla.
        return NULL;
    }

    nuevaStruct->int_table = (int *)malloc(tam_int * sizeof(int));
    nuevaStruct->char_table = (char *)malloc(tam_char * sizeof(char));

    if (nuevaStruct->int_table == NULL || nuevaStruct->char_table == NULL) {
        // Manejo de error si malloc falla.
        free(nuevaStruct->int_table);
        free(nuevaStruct->char_table);
        free(nuevaStruct);
        return NULL;
    }

    return nuevaStruct;
}
