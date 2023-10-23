#pragma once

void insertar_inicio(int *array, int *prt_size, int valor);
void insertar_fin(int *array, int *prt_size, int valor);
void insertar_posicion(int *array, int *prt_size, int valor, int posicion);
void eliminar_inicio(int *array, int *prt_size_array);
void eliminar_final(int *array, int *prt_size_array);
void eliminar_en_i(int *array, int *prt_size_array, int posicion);
void imprimir(int *array, int *prt_size_array);
void imprimir_pointer(int *array, int *prt_size_array);
int buscar(int *array, int *prt_size_array, int valor );

int buscar2(int *array, int *prt_size_array, int valor );