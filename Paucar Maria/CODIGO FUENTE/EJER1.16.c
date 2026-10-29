/*Ingrese un numero positivo que sus divisores al sumarse den el mismo numero ingresado al inicio
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.16*/
#include <stdio.h>

int main() {
    // Definición de variables como Entero (int)
    int num, divisor, suma_divisores;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    // Validación si el número es menor o igual a cero
    if (num <= 0) {
        printf("Error: Debe ingresar un numero mayor a cero.\n");
    } else {
        suma_divisores = 0;
         // Ciclo Para traducido a un bucle 'for'
        for (divisor = 1; divisor <= num - 1; divisor = divisor + 1) {
            // Verificamos si es divisor usando el operador residuo (%)
            if (num % divisor == 0) {
                suma_divisores = suma_divisores + divisor;
            }
        }

        // Validación final (usando el doble igual ==)
        if (suma_divisores == num) {
            printf("El número %d es perfecto.\n", num);
        } else {
            printf("El número %d no es perfecto.\n", num);
        }
    }

    return 0;
}
