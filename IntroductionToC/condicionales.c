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
    return 0;
}


// Operadores lógicos 
// && : AND
// || : OR
//* !  : NOT
