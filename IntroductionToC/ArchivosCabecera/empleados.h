// #if !defined(EMPLEADOS)
// #define EMPLEADOS
#pragma once 


typedef enum cargo_t{
  ANALISTA, DESARROLLO, SISTEMAS
}Cargo;

typedef struct empleado_t{
  char nombre[30];
  char apellido[40];
  char identificador[9];
  Cargo cargo;
}Empleado;

void print_empleado(Empleado* empl);

// #endif // EMPLEADOS



// Cuando queremos hacer una compilación de multiples archivos .c que cada uno tiene diferentes cabeceras, como lo es el caso de Archivos_de_cabecera hay que tener otro tipo de metodología
// se deben aprovechar las rutinas de preprocesador como ifdef, ifnotdef y los defines para asegurarnos que los archivos entran solo una vez al compilador
// #ifndef EMPLEADOS
// #define EMPLEADOS
//
// #endif 

// De esta manera se crea una medida de control para que uin archivo de cabecera no se incluya multiples veces en una misma unidad de compilación mediante los Guard 

// Para que el archivo se ejecute se procede a hacer el mismo procedimiento incluyendo todos los sources


