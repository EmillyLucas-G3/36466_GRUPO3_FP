/* ========================================================
 * Problema 1.16. Número perfecto
 * Desarrolla un programa que lea un entero positivo y determine si es perfecto,
 * es decir, si es igual a la suma de sus divisores propios (los menores que él)[cite: 16].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n, d;
    int suma_divisores = 0;

    // Entrada de datos por teclado
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    // Validación para asegurar que sea un entero positivo
    if (n <= 0) {
        printf("Error: Por favor ingrese un entero positivo.\n");
    } else {
        // Recorre los posibles divisores desde 1 hasta n - 1 y acumula los que cumplan n % d == 0[cite: 16]
        for (d = 1; d < n; d++) {
            if (n % d == 0) {
                suma_divisores += d;
            }
        }

        // Comprobamos si la suma de los divisores propios es igual al número original
        if (suma_divisores == n) {
            printf("El número %d SÍ es un número perfecto[cite: 16].\n", n);
        } else {
            printf("El número %d NO es un número perfecto[cite: 16].\n", n);
        }
    }

    return 0;
}
