/*Ingrese una cantidad exacta de un numero y se vera como se muestra el anterior y el actual
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.11*/
#include <stdio.h>

int main() {
    int n, i;
    double ant = 0, act = 1, sig;

    printf("Ingrese la cantidad de terminos (n >= 1): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error: El numero debe ser mayor o igual a 1.\n");
    } else {
        printf("Serie de Fibonacci:\n");

        // El ciclo 'for' se repite exactamente 'n' veces
        for (i = 1; i <= n; i++) {
            // 1. Mostramos el número actual en la pantalla
            printf("%.0lf\n", ant);

            // 2. Calculamos el siguiente número de la serie
            sig = ant + act;

            // 3. Avanzamos las posiciones (el actual pasa a ser el anterior)
            ant = act;
            act = sig;
        }
    }

    return 0;
}
