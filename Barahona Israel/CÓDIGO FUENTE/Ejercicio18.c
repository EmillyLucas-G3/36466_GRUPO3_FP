/* ========================================================
 * Problema 1.18. Triángulo de asteriscos
 * Desarrolla un programa que lea un entero n >= 1 y dibuje por pantalla
 * un triángulo rectángulo de n filas, donde la fila i tiene i asteriscos.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n, i, j;

    // Entrada de datos por teclado
    printf("Ingrese un entero positivo n >= 1: ");
    scanf("%d", &n);

    // Validación para asegurar que n sea mayor o igual a 1
    if (n < 1) {
        printf("Error: Por favor ingrese un número mayor o igual a 1.\n");
    } else {
        printf("\nTriángulo de asteriscos para n = %d:\n", n);

        // Uso de ciclos anidados: el externo controla las filas y el interno los asteriscos
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n"); // Salto de línea al terminar cada fila
        }
    }

    return 0;
}
