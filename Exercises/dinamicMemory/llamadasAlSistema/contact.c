#include <stdio.h>
#include <stdlib.h>

struct contact {
    char *name;
    char *lastname;
};


int main() {
    int n = 100; // Número de elementos
    struct contact *table = (struct contact *)malloc(n * sizeof(struct contact));

    if (table == NULL) {
        // Manejo de error si la asignación de memoria falla.
        return 1;
    }

    // Inicialización de la tabla
    for (int i = 0; i < n; i++) {
        table[i].name = (char *)malloc(20 * sizeof(char));
        table[i].lastname = (char *)malloc(20 * sizeof(char));
    }



    // Liberación de la memoria
    for (int i = 0; i < n; i++) {
        free(table[i].name);
        free(table[i].lastname);
    }
    free(table);

    return 0;
}
