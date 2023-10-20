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
  printf("Fecha: %-d%d-%d, Registro %fºC. UV %d, VIento %f km/h\n",
  medicion->anio,
  medicion->mes,
  medicion->dia,
  medicion->temperatura,
  medicion->uv,
  medicion->viento);
}

int main() {
  struct medicion medida  =  {
    .anio =2020, .mes =11, .dia=9, .temperatura=12.5, .uv=4, .viento=15.0
  };
  //fwrite
  FILE *fp = fopen("mediciones.bin","wb");
  int total= fwrite(&medida, sizeof(struct medicion), 1,fp);
  if (total!=1){
    printf("Error de escritura");
  }
  fclose(fp);
  
  
}
