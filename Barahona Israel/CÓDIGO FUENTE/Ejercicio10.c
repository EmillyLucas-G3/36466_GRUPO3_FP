/* ========================================================
 * Problema 1.10. Factorial
 * Programa que lea un número entero n >= 0 y calcule su factorial,
 * sabiendo que 0! = 1[cite: 10].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n, i;
    // Usamos 'long long' para evitar desbordamientos si el número es un poco más grande (como 20!)
    long long factorial = 1;

    // Entrada de datos por teclado
    printf("Ingrese un numero entero n >= 0: ");
    scanf("%d", &n);

    // Validación para verificar que no sea negativo (tal como indica el "Para pensar")
    if (n < 0) {
        printf("Error: El factorial no esta definido para numeros negativos.\n");
    } else {
        // Ciclo para calcular el factorial usando un acumulador que inicia en 1
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        // Muestra el resultado por pantalla
        printf("El factorial de %d es: %lld\n", n, factorial);
    }

    return 0;
}
