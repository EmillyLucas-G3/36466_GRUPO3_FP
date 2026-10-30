/* ========================================================
 * Problema 1.3. Divisible
 * Programa que determina si un número es divisible por otro.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Error: No se puede dividir entre cero.\n");
    } else {
        if (num1 % num2 == 0) {
            printf("El numero %d SÍ es divisible por %d.\n", num1, num2);
        } else {
            printf("El numero %d NO es divisible por %d.\n", num1, num2);
        }
    }

    return 0;
}
