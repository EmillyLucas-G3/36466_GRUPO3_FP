/*Ingrese un numero real y obtener su factorial si es negativo muestra un mensaje de error
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.10 */
#include <stdio.h>

int main() {
    // Definición de variables según el tipo de PSeInt
    int n, i;
    double f; // Usamos double porque f se definió como Real (para soportar factoriales grandes)

    printf("Ingrese un numero entero (n >= 0): ");
    scanf("%d", &n);

    // Validación si el número es negativo
    if (n < 0) {
        printf("Error: El numero no puede ser negativo.\n");
    } else {
        f = 1;

        // Ciclo Para traducido a un bucle 'for'
        for (i = 1; i <= n; i = i + 1) {
            f = f * i;
        }

        // Impresión de resultados
        printf("Resultado:\n");
        printf("El factorial es: %.0lf\n", f);
    }

    return 0;
}
