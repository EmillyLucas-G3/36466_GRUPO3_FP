/* ========================================================
 * Problema 1.7. Raíz cuadrada entera
 * Desarrolla un programa que calcule la raíz cuadrada entera por defecto
 * de un número N positivo dado, que se define como el mayor número entero R >= 0 tal que R^2 <= N.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int N, i = 1;

    // Entrada de datos por teclado
    printf("Ingrese un número entero positivo N: ");
    scanf("%d", &N);

    // Validación para asegurar que N sea positivo o cero
    if (N < 0) {
        printf("Error: Por favor ingrese un número mayor o igual a cero.\n");
    } else {
        // Dada una variable entera i = 1, itera incrementando su valor de uno en uno mientras i^2 <= N
        while (i * i <= N) {
            i++;
        }

        // La aproximación por defecto de la raíz es R = i - 1
        int R = i - 1;

        // Muestra el resultado por pantalla
        printf("La raíz cuadrada entera por defecto de %d es: %d\n", N, R);
    }

    return 0;
}
