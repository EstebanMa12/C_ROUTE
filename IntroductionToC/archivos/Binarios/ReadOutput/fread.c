#include <stdio.h>

struct medicion
{
  unsigned short anio;
  unsigned char mes;
  unsigned char dia;
  float temperatura;
  unsigned char uv;
  float viento;
};

void print_medicion(struct medicion *medicion){
  printf("Fecha: %d-%d-%d, Registro %fºC. UV %d, VIento %f km/h\n",
  medicion->anio,
  medicion->mes,
  medicion->dia,
  medicion->temperatura,
  medicion->uv,
  medicion->viento);
}

int main() {
  struct medicion medida ;
  
  print_medicion(&medida);
  
}
