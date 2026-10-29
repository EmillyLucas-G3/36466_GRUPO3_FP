/*Ingrese dos numeros enteros o decimales y obtendra su media
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.1*/
#include <stdio.h>

int main() {
    // Definición de variables como Real (float o double)
    double num1, num2, media;

    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);

    // Validación del primer número
    if (num1 < 0) {
        printf("Error: No se permiten numeros negativos.\n");
    } else {
        printf("Ingrese el segundo numero: ");
        scanf("%lf", &num2);

        // Validación del segundo número
        if (num2 < 0) {
            printf("Error: No se permiten numeros negativos.\n");
        } else {
            // Cálculo del promedio
            media = (num1 + num2) / 2;
            printf("El promedio final es: %.2lf\n", media);
        }
    }

    return 0;
}
