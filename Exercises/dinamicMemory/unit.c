// Supóngase la siguiente definición de estructura de datos, variables y código:
#include <stdio.h>
#include <stdlib.h>

struct unit 
{
    struct unit *next;
} *unit1, *unit2, *unit3;

void borra(struct unit **ptr) ;

int main(){

  unit1 = (struct unit *)malloc(sizeof(struct unit));
  unit2 = (struct unit *)malloc(sizeof(struct unit));
  unit3 = (struct unit *)malloc(sizeof(struct unit));
  unit1->next = unit2;
  unit2->next = unit3;
  unit3->next = NULL;
  borra(&unit1);
  //Para corroborar que se borro
  printf("El puntero: %p\n", unit1);
  printf("El puntero: %p\n", unit2);
  printf("El puntero: %p\n", unit3);



  return 0;

}


void borra(struct unit **ptr) {
    while (*ptr != NULL) {
        struct unit *temp = *ptr;   // Almacena una copia del puntero actual
        *ptr = (*ptr)->next;        // Avanza al siguiente nodo
        free(temp);                 // Libera la memoria del nodo actual
    }
}
