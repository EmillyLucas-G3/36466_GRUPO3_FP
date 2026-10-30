/* ========================================================
 * Problema 1.2. Operaciones aritméticas básicas
 * Programa que lee dos números enteros, y calcula e imprime
 * su suma, resta, multiplicación y división.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int num1, num2;

    // Entrada de datos por teclado
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);

    printf("\n--- RESULTADOS ---\n");
    printf("Suma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Resta: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicación: %d * %d = %d\n", num1, num2, num1 * num2);

    // Validación para evitar la división entre cero
    if (num2 != 0) {
        printf("División: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("División: No es posible dividir entre cero.\n");
    }

    return 0;
}
