/* ========================================================
 * Problema 1.8. Número primo
 * Programa que ingresa por teclado un número entero mayor que 1
 * y determina si es primo o no[cite: 8].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n, i, es_primo = 1; // Suponemos inicialmente que es primo

    // Entrada de datos por teclado
    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &n);

    // Validación para asegurar que sea mayor que 1
    if (n <= 1) {
        printf("Error: El numero debe ser mayor que 1[cite: 8].\n");
    } else {
        // Verificamos si tiene divisores entre 2 y n - 1
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                es_primo = 0; // Encontró un divisor, por lo tanto no es primo
                break;       // Salimos del bucle porque ya sabemos que no es primo
            }
        }

        // Mostramos el resultado según la bandera es_primo
        if (es_primo == 1) {
            printf("El numero %d SÍ es un número primo.\n", n);
        } else {
            printf("El numero %d NO es un número primo.\n", n);
        }
    }

    return 0;
}
