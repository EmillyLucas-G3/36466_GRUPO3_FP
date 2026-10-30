/* ========================================================
 * Problema 1.4. Intervalo
 * Programa que verifica si un número pertenece al intervalo [0, 10].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    float x;

    printf("Ingrese un numero para verificar si pertenece al intervalo [0, 10]: ");
    scanf("%f", &x);

    if (x >= 0 && x <= 10) {
        printf("El numero %.2f SÍ pertenece al intervalo [0, 10].\n", x);
    } else {
        printf("El numero %.2f NO pertenece al intervalo [0, 10].\n", x);
    }

    return 0;
}
