/* ========================================================
 * Problema 1.19. Segundo mayor de una secuencia
 * Desarrolla un programa que lea números enteros positivos hasta que se
 * introduzca un 0, y muestre el mayor y el segundo mayor de los valores ingresados.
 * Si hay menos de dos valores, debe informarlo.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n;
    int mayor = 0;
    int segundo = 0;
    int contador = 0;

    printf("Ingrese números enteros positivos (ingrese 0 para terminar): \n");

    while (1) {
        printf("Ingrese un número: ");
        scanf("%d", &n);

        // Condición de salida si se introduce un 0
        if (n == 0) {
            break;
        }

        // Validación para asegurar que sean enteros positivos
        if (n < 0) {
            printf("Por favor, ingrese solo números positivos.\n");
            continue;
        }

        contador++;

        // Lógica para actualizar el mayor y el segundo mayor
        if (contador == 1) {
            mayor = n;
        } else if (contador == 2) {
            if (n > mayor) {
                segundo = mayor;
                mayor = n;
            } else {
                segundo = n;
            }
        } else {
            if (n > mayor) {
                segundo = mayor;
                mayor = n;
            } else if (n > segundo && n < mayor) {
                segundo = n;
            }
        }
    }

    // Verificamos si se ingresaron al menos dos valores válidos
    if (contador < 2) {
        printf("\nError: Se ingresaron menos de dos valores. Se necesitan al menos dos números para calcular el segundo mayor.\n");
    } else {
        printf("\n--- RESULTADOS ---\n");
        printf("El número mayor es: %d\n", mayor);
        printf("El segundo mayor es: %d\n", segundo);
    }

    return 0;
}
