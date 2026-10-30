/* ========================================================
 * Problema 1.20. Adivina el número
 * Desarrolla un programa que "piense" un número entre 1 y 100
 * y pida al usuario adivinarlo. Después de cada intento debe indicar
 * "más alto", "más bajo" o "¡acertaste!", y al final mostrar cuántos intentos se usaron.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int numero_secreto = 42; // Puedes cambiarlo o hacerlo aleatorio si prefieres
    int intento;
    int intentos_contador = 0;

    printf("=== JUEGO: ADIVINA EL NÚMERO ===\n");
    printf("He pensado en un número entre 1 y 100. ¡Intenta adivinarlo!\n\n");

    // Ciclo que se repite hasta que el intento sea igual al número secreto
    do {
        printf("Ingresa tu intento: ");
        scanf("%d", &intento);

        intentos_contador++; // Incrementamos el contador de intentos

        if (intento > numero_secreto) {
            printf("Más bajo\n\n"); // El número secreto es menor
        } else if (intento < numero_secreto) {
            printf("Más alto\n\n");  // El número secreto es mayor
        } else {
            printf("\n¡Acertaste!\n");
            printf("Lo lograste en %d intentos.\n", intentos_contador);
        }

    } while (intento != numero_secreto);

    return 0;
}
