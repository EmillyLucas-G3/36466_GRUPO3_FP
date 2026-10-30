/* ========================================================
 * Problema 1.9. Números primos comprendidos entre dos números dados
 * Programa que muestre por pantalla todos los números primos
 * comprendidos entre dos números enteros introducidos por teclado[cite: 9].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int inicio, fin, i, j, es_primo, temp;

    // Entrada de datos por teclado
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &inicio);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &fin);

    // Si el usuario ingresa el menor primero o viceversa, ordenamos el intervalo
    if (inicio > fin) {
        temp = inicio;
        inicio = fin;
        fin = temp;
    }

    printf("\nNumeros primos entre %d y %d:\n", inicio, fin);
    int contador_primos = 0;

    // Recorremos el rango desde 'inicio' hasta 'fin'
    for (i = inicio; i <= fin; i++) {
        // Los números menores o iguales a 1 no son primos
        if (i <= 1) {
            continue;
        }

        es_primo = 1; // Suponemos que es primo

        // Verificamos si 'i' es divisible por algún número entre 2 y i / 2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                es_primo = 0; // Encontró un divisor, no es primo
                break;
            }
        }

        // Si es primo, lo imprimimos
        if (es_primo == 1) {
            printf("%d ", i);
            contador_primos++;
        }
    }

    if (contador_primos == 0) {
        printf("No se encontraron numeros primos en ese rango.");
    }
    printf("\n");

    return 0;
}
