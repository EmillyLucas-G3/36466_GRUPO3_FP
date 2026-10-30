/* ========================================================
 * Problema 1.14. Máximo común divisor (algoritmo de Euclides)
 * Desarrolla un programa que lea dos enteros positivos a y b y calcule su
 * máximo común divisor con el algoritmo de Euclides: mientras b != 0,
 * reemplaza (a, b) por (b, a % b). Al terminar, a es el MCD[cite: 14].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int a, b, temp;

    // Entrada de datos por teclado
    printf("Ingrese el primer entero positivo (a): ");
    scanf("%d", &a);

    printf("Ingrese el segundo entero positivo (b): ");
    scanf("%d", &b);

    // Validación para asegurar que sean enteros positivos
    if (a <= 0 || b <= 0) {
        printf("Error: Por favor ingrese dos enteros positivos.\n");
    } else {
        int original_a = a;
        int original_b = b;

        // Algoritmo de Euclides: mientras b != 0, reemplaza (a, b) por (b, a % b)[cite: 14]
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }

        // Al terminar, a es el MCD[cite: 14]
        printf("El máximo común divisor de %d y %d es: %d\n", original_a, original_b, a);
    }

    return 0;
}
