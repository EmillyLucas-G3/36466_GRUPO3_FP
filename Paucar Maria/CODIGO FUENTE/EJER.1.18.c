/*Ingresamos la altura del triangulo que necesitamos validamos que
la altura sea positiva, como resultado nos dará la imagen del triangulo  solicitado
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.18 */
#include <stdio.h>

int main() {
    int n, fila, columna;

    printf("Ingrese la altura del triangulo (n >= 1):\n");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error: El numero debe ser mayor o igual a 1.\n");
    } else {
        // En C los ciclos Para (for) suelen empezar desde 1 hasta n de forma inclusiva (<=)
        for (fila = 1; fila <= n; fila++) {

            for (columna = 1; columna <= fila; columna++) {
                printf("*"); // Imprime el asterisco sin saltar de línea
            }

            printf("\n"); // Equivale a Escribir "" (salto de línea al terminar la fila)
        }
    }

    return 0;
}
