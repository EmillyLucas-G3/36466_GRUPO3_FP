/*Ingrese un numero por teclado y al final se indicara cual es la suma total de sus dígitos
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.12*/
#include <stdio.h>

int main() {
    int num, sum, dig;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: El numero debe ser positivo.\n");
    } else {
        sum = 0;

        // Ciclo for simplificado para descomponer el número
        // Se ejecuta MIENTRAS num > 0 y en cada vuelta se DIVIDE entre 10
        for (; num > 0; num = num / 10) {
            dig = num % 10;   // Extraemos el último dígito
            sum = sum + dig;  // Lo sumamos
               }

        printf("Resultado:\n");
        printf("La suma de los digitos es: %d\n", sum);
    }

    return 0;
}
