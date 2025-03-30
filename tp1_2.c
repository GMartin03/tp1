#include <stdio.h>


int cuadrado(int num) {
    return num * num;
}

void cuadradoVoid(int num) {
    printf("El cuadrado de %d es: %d\n", num, num * num);
}

void mostrarDirec(int *ptr) {
    printf("Dirección de la variable: %p\n", ptr);
    printf("Contenido de la variable: %d\n", *ptr);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);  
    }
}

void leerPares() {
    int num1, num2;

    printf("Ingrese dos valores enteros: ");
    scanf("%d %d", &num1, &num2);

    printf("\nValores originales: num1 = %d, num2 = %d\n", num1, num2);

    printf("\nMostrando dirección num2 contenido de num1:\n");
    mostrarDirec(&num1);

    printf("\nMostrando dirección num2 contenido de num2:\n");
    mostrarDirec(&num2);

    printf("\nInvirtiendo valores...\n");
    invertir(&num1, &num2);
    printf("Valores después de invertir: num1 = %d, num2 = %d\n", num1, num2);

    printf("\nOrdenando valores...\n");
    ordenar(&num1, &num2);
    printf("Valores después de ordenar: num1 = %d, num2 = %d\n", num1, num2);
}

int main() {
    int numero = 5;
    printf("El cuadrado de %d es: %d\n", numero, cuadrado(numero));

    cuadradoVoid(numero);
    mostrarDirec(&numero);

    leerPares();

    return 0;
}
