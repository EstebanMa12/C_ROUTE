#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "functions.h"


void read_print_header(FILE *file, uint16_t *Magic_string, uint32_t HeaderVars[3]) {
    if (fread(Magic_string, sizeof(*Magic_string), 1, file) != 1) {
        printf("Error de lectura de la cabecera");
        fclose(file);
        return;
    }
    for (int i = 0; i < 3; i++) {
        if (fread(&HeaderVars[i], sizeof(uint32_t), 1, file) != 1) {
            printf("Error de lectura de la cabecera");
            fclose(file);
            return;
        }
    }
    // Magic_string = le_h16(Magic_string);
    printf("Magic string: 0x%04X\n", *Magic_string);
    printf("Student count: %u\n", HeaderVars[0]);
    printf("Course count: %u\n", HeaderVars[1]);
    printf("Enrollment count: %u\n", HeaderVars[2]);
    printf("---------------------------------------------------\n");
}

uint32_t le_host(uint32_t value) {
    uint32_t result = 0;
    result |= (value & 0xFF) << 24;
    result |= ((value >> 8) & 0xFF) << 16;
    result |= ((value >> 16) & 0xFF) << 8;
    result |= ((value >> 24) & 0xFF);
    return result;
}

// Function to convert a little-endian uint16_t to a host-endian uint16_t
uint16_t le_h16(uint16_t value) {
    uint16_t result = 0;
    result |= (value & 0xFF) << 8;
    result |= ((value >> 8) & 0xFF);
    return result;
}