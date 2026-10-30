/* ========================================================
 * Problema 1.11. Serie de Fibonacci
 * Programa que lea un entero n >= 1 y muestre los primeros
 * n términos de la serie de Fibonacci[cite: 11].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, siguiente; // Usamos long long por si n es grande

    // Entrada de datos por teclado
    printf("Ingrese un numero entero n >= 1: ");
    scanf("%d", &n);

    // Validación para asegurar que n sea mayor o igual a 1
    if (n < 1) {
        printf("Error: Por favor ingrese un numero mayor o igual a 1.\n");
    } else {
        printf("Los primeros %d terminos de la serie de Fibonacci son:\n", n);

        for (i = 1; i <= n; i++) {
            if (i == 1) {
                printf("%lld ", t1);
                continue;
            }
            if (i == 2) {
                printf("%lld ", t2);
                continue;
            }
            // Siguiente término como la suma de los dos anteriores
            siguiente = t1 + t2;
            t1 = t2;
            t2 = siguiente;

            printf("%lld ", siguiente);
        }
        printf("\n");
    }

    return 0;
}
