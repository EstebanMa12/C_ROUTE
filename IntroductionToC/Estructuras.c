#include <stdio.h>

// ESTRUCTURAS 
// Una estructura es un tipo de dato que permite agrupar datos de distintos tipos.
// Se puede definir una estructura de la siguiente manera:
// struct nombreEstructura {
//     tipoDato1 nombreDato1;
//     tipoDato2 nombreDato2;
//     tipoDato3 nombreDato3;
//     ...
//     tipoDatoN nombreDatoN;
// };  <--- es necesario poner el punto y coma


struct cuenta {
    char nombre[20];
    int numeroCuenta;
    float saldo;
};

int main(){
  struct cuenta miCuenta;
  printf("Ingresa el nombre del titular de la cuenta: ");
  scanf("%s", miCuenta.nombre);
  printf("Ingresa el numero de cuenta: ");
  scanf("%d", &miCuenta.numeroCuenta);
  printf("Ingresa el saldo de la cuenta: ");
  scanf("%f", &miCuenta.saldo);
  printf("El nombre del titular de la cuenta es: %s\n", miCuenta.nombre);
  printf("El numero de cuenta es: %d\n", miCuenta.numeroCuenta);
  printf("El saldo de la cuenta es: %f\n", miCuenta.saldo);
  return 0;
  
}


// Si hago una funció que acepta una estructura y se la llama como un puntero  se genera un problema para acceder a los datos, una solución es utilizar una flecha ->
// void funcion(struct cuenta *cuenta){
//     printf("El nombre del titular de la cuenta es: %s\n", cuenta->nombre);
//     printf("El numero de cuenta es: %d\n", cuenta->numeroCuenta);
//     printf("El saldo de la cuenta es: %f\n", cuenta->saldo);
// }
