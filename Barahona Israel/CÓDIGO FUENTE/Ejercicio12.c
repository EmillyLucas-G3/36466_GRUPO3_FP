/* ========================================================
 * Problema 1.12. Suma de dígitos
 * Programa que lea un entero positivo y calcule la suma de sus dígitos.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int n, copia, digito, suma = 0;

    // Entrada de datos por teclado
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    // Validación para asegurar que sea un entero positivo
    if (n <= 0) {
        printf("Error: Por favor ingrese un entero positivo.\n");
    } else {
        copia = n; // Guardamos una copia del número para el mensaje final

        // Ciclo para extraer y sumar los dígitos usando el operador módulo y división entera
        while (n > 0) {
            digito = n % 10;     // Obtiene el último dígito
            suma += digito;      // Acumula el dígito en la suma
            n = n / 10;          // Elimina el último dígito
        }

        // Muestra el resultado por pantalla
        printf("La suma de los digitos de %d es: %d\n", copia, suma);
    }

    return 0;
}
