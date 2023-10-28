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
  printf("Fecha: %d-%d-%d, Registro %.2fºC. UV %d, VIento %.2f km/h\n",
  medicion->anio,
  medicion->mes,
  medicion->dia,
  medicion->temperatura,
  medicion->uv,
  medicion->viento);
}

int main(int argc, char** argv) {
  /*
  
  struct medicion medidas[]={
    {
      .anio = 2023,
      .mes = 11,
      .dia = 9,
      .temperatura = 12.5,
      .uv = 4,
      .viento = 15.0
    },
    {
      .anio = 2023,
      .mes = 11,
      .dia = 10,
      .temperatura = 12.5,
      .uv = 8,
      .viento = 25.0
    },
    {
      .anio = 2023,
      .mes = 11,
      .dia = 11,
      .temperatura = 22.5,
      .uv = 8,
      .viento = 12.0
    },
    {      
      .anio = 2022,
      .mes = 10,
      .dia = 23,
      .temperatura = 32.5,
      .uv = 2,
      .viento = 2.0
    },
  };
  */

  // FILE *fp = fopen("mediciones.bin","wb");
  // int total= fwrite(&medidas, sizeof(struct medicion), 4,fp);
  // if (total!=4){
  //   printf("Error de escritura");
  // }
  // fclose(fp);

  struct medicion medidas[4] ;
  FILE *fp = fopen("mediciones.bin","rb");
  int total=fread(&medidas, sizeof(struct medicion), 4, fp);
  if (total!=4){
    printf("Error de lectura");
  }
  fclose(fp);
  for (int i=0;i<total;i++){
    print_medicion(&medidas[i]);
    printf("----------------------------------------------------------\n");
  }
  return 0;
};