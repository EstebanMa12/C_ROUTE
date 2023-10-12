#include <stdio.h>

// IF : t allows a program to execute different statements depending on whether a condition is true or false. 

// ELSE : The else statement allows you to execute a block of statements if the condition is false.

// ELSE IF : The else if statement allows you to execute a block of code among many alternatives.

// if (condition) {
//   // statements to be executed if the condition is true
// } else {
//   // statements to be executed if the condition is false
// }

int main(){
    int edad = 24;
    if (edad > 18) {
        printf("Eres mayor de edad\n");
    } else {
        printf("Eres menor de edad\n");
    }
    imprimir_dia(2);
    return 0;
}


// Operadores lógicos 
// && : AND
// || : OR
//* !  : NOT

// Operadores de comparación
// == : Igual
// != : Diferente
// >  : Mayor que
// <  : Menor que
// >= : Mayo o igual que
// <= : Menos o igual que

// * SWITCH :
// The switch statement allows you to execute a block of code among many alternatives.
// SINTAX:
// switch(expression) {
//   case constant-expression  :
//     statement(s);
//     break; // optional

void imprimir_dia(int dia ){
    switch (dia)
    {
    case 1:
        printf("Lunes\n");
        break;
    case 2:
        printf("Martes\n");
        break;
    case 3: 
        printf("Miercoles\n");
        break;
    case 4:
        printf("Jueves\n");
        break;
    case 5:
        printf("Viernes\n");
        break;
    case 6: 
        printf("Sabado\n");
        break;
    case 7:
        printf("Domingo\n");
        break;
    default:
        printf("Dia invalido\n");
        break;
    }
}

