/*Ingrese un numero positivo si ingresa un numero menor o igual a 0 muestra un mensaje de error que el numero debe de
ser mayor a 0
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.7*/
#include <stdio.h>

int main() {
    // Definición de variables como Entero (int)
    int N, i, R;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);

    // Validación si el número es menor o igual a cero
    if (N <= 0) {
        printf("Error: El numero debe ser mayor a cero.\n");
    } else {
        i = 1;

        // Bucle Mientras para encontrar la raíz cuadrada entera sin usar librerías matemáticas
        while ((i * i) <= N) {
            i = i + 1;
        }

        R = i - 1;

        // Impresión de resultados
        printf("Resultado:\n");
        printf("La raiz cuadrada entera es: %d\n", R);
    }

    return 0;
}
