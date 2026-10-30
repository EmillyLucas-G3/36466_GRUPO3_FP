/* ========================================================
 * Problema 1.15. Año bisiesto
 * Desarrolla un programa que lea un año y determine si es bisiesto.
 * Un año es bisiesto si es divisible entre 4, excepto los años divisibles
 * entre 100, que solo lo son si también son divisibles entre 400[cite: 15].
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int anio;

    // Entrada de datos por teclado
    printf("Ingrese un año: ");
    scanf("%d", &anio);

    // Validación para asegurar que sea un año positivo
    if (anio <= 0) {
        printf("Error: Por favor ingrese un año válido positivo.\n");
    } else {
        // Combinamos las condiciones usando operadores lógicos y módulo (%)
        // Un año es bisiesto si (es divisible entre 4 Y NO entre 100) O (es divisible entre 400)
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            printf("El año %d SÍ es bisiesto[cite: 15].\n", anio);
        } else {
            printf("El año %d NO es bisiesto[cite: 15].\n", anio);
        }
    }

    return 0;
}
