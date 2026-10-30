/* ========================================================
 * Problema 1.6. Máximo, mínimo y media de alturas
 * Programa que lee un número indeterminado de alturas hasta
 * introducir una negativa, calculando la media, el máximo y el mínimo[cite: 6].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    float altura, suma = 0, maximo, minimo;
    int contador = 0;

    printf("Ingrese la altura (o un numero negativo para terminar): ");
    scanf("%f", &altura);

    // Verificamos si la primera altura ya es negativa
    if (altura < 0) {
        printf("No se ingresaron alturas validas.\n");
    } else {
        // Inicializamos el máximo y el mínimo con la primera altura válida
        maximo = altura;
        minimo = altura;
        suma = altura;
        contador = 1;

        // Bucle para leer el número indeterminado de alturas
        while (1) {
            printf("Ingrese otra altura (o un numero negativo para terminar): ");
            scanf("%f", &altura);

            // Condición de salida si se introduce un número negativo
            if (altura < 0) {
                break;
            }

            // Actualizamos la suma y el contador
            suma += altura;
            contador++;

            // Actualizamos el máximo si la nueva altura es mayor
            if (altura > maximo) {
                maximo = altura;
            }

            // Actualizamos el mínimo si la nueva altura es menor
            if (altura < minimo) {
                minimo = altura;
            }
        }

        // Calculamos la media
        float media = suma / contador;

        // Mostramos los resultados por pantalla
        printf("\n--- RESULTADOS ---\n");
        printf("Cantidad de alturas ingresadas: %d\n", contador);
        printf("Altura media: %.2f\n", media);
        printf("Altura maxima: %.2f\n", maximo);
        printf("Altura minima: %.2f\n", minimo);
    }

    return 0;
}
