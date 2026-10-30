/* ========================================================
 * Problema 1.17. Conversión de decimal a binario
 * Desarrolla un programa que lea un entero positivo en base 10
 * y muestre su representación en binario.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n, original;
    long long binario = 0;
    long long multiplicador = 1;

    // Entrada de datos por teclado
    printf("Ingrese un entero positivo en base 10: ");
    scanf("%d", &n);

    // Validación para asegurar que sea un entero positivo
    if (n < 0) {
        printf("Error: Por favor ingrese un entero positivo.\n");
    } else if (n == 0) {
        printf("La representación en binario de 0 es: 0\n");
    } else {
        original = n; // Guardamos una copia para el mensaje final

        // Dividimos sucesivamente entre 2 y acumulamos los restos en orden inverso
        while (n > 0) {
            int resto = n % 2;
            binario = binario + (resto * multiplicador);
            multiplicador = multiplicador * 10;
            n = n / 2;
        }

        // Muestra el resultado por pantalla
        printf("La representación en binario de %d es: %lld\n", original, binario);
    }

    return 0;
}
