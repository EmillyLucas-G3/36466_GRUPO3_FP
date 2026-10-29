/*Ingrese un numero si esta dentro del rango da como salida un mensaje que ese numero pertenece al intervalo
caso contrario muestra un mensaje que no pertenece al intervalo
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.4*/

#include <stdio.h>

int main() {
    // Definición de variable como Real (double)
    double num;

    printf("Introduce un numero: ");
    scanf("%lf", &num);

    // Validación del intervalo usando el operador lógico Y (&&)
    if (num >= 0 && num <= 10) {
        printf("El numero pertenece al intervalo\n");
    } else {
        printf("El numero NO pertenece al intervalo\n");
    }

    return 0;
}
