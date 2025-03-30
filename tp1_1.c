#include <stdio.h>

int main () {

    int var = 42; 
    int *puntero = &var;  

    printf("1) El contenido del puntero: %d\n", *puntero);
    printf("2) La dirección de memoria almacenada por el puntero: %p\n", puntero);
    printf("3) La dirección de memoria de la variable: %p\n", &var);
    printf("4) La dirección de memoria del puntero: %p\n", &puntero);
    printf("5) Tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(var));

    return 0;
}