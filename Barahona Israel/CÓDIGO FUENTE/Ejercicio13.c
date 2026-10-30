/* ========================================================
 * Problema 1.13. Número capicúa
 * Programa que lea un entero positivo y determine si es capicúa,
 * es decir, si se lee igual de izquierda a derecha que de derecha a izquierda[cite: 13].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n, original, invertido = 0, digito;

    // Entrada de datos por teclado
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    // Validación para asegurar que sea un entero positivo
    if (n <= 0) {
        printf("Error: Por favor ingrese un entero positivo.\n");
    } else {
        original = n; // Guardamos el número original para compararlo después

        // Construimos el número invertido usando la misma lógica de extracción de dígitos
        while (n > 0) {
            digito = n % 10;                        // Extrae el último dígito
            invertido = (invertido * 10) + digito;  // Acumula el dígito invertido
            n = n / 10;                             // Elimina el último dígito
        }

        // Comparamos el número invertido con el original
        if (original == invertido) {
            printf("El numero %d SÍ es capicúa[cite: 13].\n", original);
        } else {
            printf("El numero %d NO es capicúa[cite: 13].\n", original);
        }
    }

    return 0;
}
