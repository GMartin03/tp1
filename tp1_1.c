#include <stdio.h>

int main () {

    int var = 42; 
    int *puntero = &var;  

    printf("El contenido del puntero: %d\n", *puntero);
    printf("La dirección de memoria almacenada por el puntero: %p\n", puntero);
    printf("La dirección de memoria de la variable: %p\n", &var);
    printf("La dirección de memoria del puntero: %p\n", &puntero);
    printf("Tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(var));

    return 0;
}