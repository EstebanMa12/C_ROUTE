// Asignaciones: Es cuando trabajamos con la memoria manipulando valores
// Cuando queremos declarar una variable 
// Como escribir un parametro en c ?

#include <stdio.h>
void imprimir_datos(int edad, char* nombre){
    printf("Hola %s, tienes %d anios\n", nombre, edad);
}

int main(){
    imprimir_datos(24, "Esteban");
    return 0;
}