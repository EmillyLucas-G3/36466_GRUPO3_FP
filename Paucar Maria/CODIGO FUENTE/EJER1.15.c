/*Ingresa el año que quieras saber si es bisiesto o no
Elaborado por Maria Fernanda Paucar
PROBLEMA1.15*/
#include <stdio.h>

int main() {
    // Definición de variable como Entero (int)
    int anio;

    printf("Ingrese un año: ");
    scanf("%d", &anio);

    // Estructuras Si / Sino anidadas
    if (anio % 4 == 0) {
        if (anio % 100 == 0) {
            if (anio % 400 == 0) {
                printf("El año %d sí es bisiesto.\n", anio);
                } else {
                printf("El año %d no es bisiesto.\n", anio);
            }
        } else {
            printf("El año %d sí es bisiesto.\n", anio);
        }
    } else {
        printf("El año %d no es bisiesto.\n", anio);
    }

    return 0;
}
