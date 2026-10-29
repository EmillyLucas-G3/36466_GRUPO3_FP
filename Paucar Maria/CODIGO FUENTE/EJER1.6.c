/*Ingrese números enteros o decimales si el usuario ingresa un numero negativo o el 0 el programa termina e
indica los resultados de la altura máxima, mínima y la media ingresada por teclado
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.6*/
#include <stdio.h>

int main() {
    // Definición de variables
    double alt, max, min, sum;
    int cont;

    // Inicialización de variables
    sum = 0;
    cont = 0;

    printf("Ingrese una altura (o un numero negativo para salir): ");
    scanf("%lf", &alt);

    // Bucle Mientras (while)
    while (alt >= 0) {
        sum = sum + alt;
        cont = cont + 1;

        // Si es la primera altura ingresada
        if (cont == 1) {
            max = alt;
            min = alt;
        } else {
            // Actualización de máximos y mínimos
            if (alt > max) {
                max = alt;
            }
            if (alt < min) {
                min = alt;
            }
        }

        printf("Ingrese otra altura (o un numero negativo para salir): ");
        scanf("%lf", &alt);
    }

    // Reporte final de resultados
    if (cont > 0) {
        printf("--- RESULTADOS ---\n");
        printf("Altura maxima: %.2lf\n", max);
        printf("Altura minima: %.2lf\n", min);
        printf("Media de alturas: %.2lf\n", (sum / cont));
    } else {
        printf("No se ingresaron alturas validas.\n");
    }

    return 0;
}
