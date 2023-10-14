// ENUMERADORES: 
// Un enumerador es un tipo de dato que permite definir un conjunto de identificadores 
// Se puede definir un enumerador de la siguiente manera:
// enum nombreEnumerador {
//     constante1,
//     constante2,
//     constanteN,
// };  <--- es necesario poner el punto y coma
//
// Definir un enumerador
enum dias_de_la_semana {
  LUNES,
  MARTES,
  MIERCOLES,
  JUEVES,
  VIERNES,
  SABADO,
  DOMINGO
};

// Declarar una variable de tipo enumerador
enum dias_de_la_semana hoy;

// Asignar un valor a la variable
hoy = MIERCOLES;


int main(){
  // SI yo llego a intentar imprimir lo que tengo dentro de la variable enum no voy a obtener una cadena de caracteres sino que un numero entero
  printf("Hoy es: %d\n", hoy);
  return 0;

}
//  Si quiero que la cuenta de los valores se enumeren a partir de una numero en especifico solo hace falta definir el primer valor del enum 
// enum dias_de_la_semana {
//   LUNES = 1,
//   MARTES,
//   MIERCOLES,
//   ...
// };