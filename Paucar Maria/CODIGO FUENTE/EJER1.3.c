/*Ingrese dos numeros enteros si no es divisible emite un mensaje de rror
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.3*/
#include <stdio.h>

int main() {
    // Definición de variables como Entero (int)
    int num1, num2;

    printf("Escribe el primer numero (entero): ");
    scanf("%d", &num1);
    printf("Escribe el segundo numero (entero): ");
    scanf("%d", &num2);

    // Validación si alguno de los números es negativo
    if (num1 < 0 || num2 < 0) {
        printf("Error: No se permiten numeros negativos.\n");
    } else {
        // Validación de divisibilidad usando el operador residuo (%)
        if (num1 % num2 == 0) {
            printf("%d si es divisible por %d\n", num1, num2);
        } else {
            printf("%d no es divisible por %d\n", num1, num2);
        }
    }

    return 0;
}
