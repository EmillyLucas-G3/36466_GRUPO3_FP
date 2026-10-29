/*Ingrese un numero obtener su valor absoluto y su resultado  elevado al cubo
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.2}*/
#include <stdio.h>

int main() {
    // Definición de variables como Real (double)
    double x, resultado;

    printf("Ingrese el numero x: ");
    scanf("%lf", &x);

    // Validación si el número es negativo
    if (x < 0) {
        printf("Error: No se permiten numeros negativos.\n");
    } else {
        // Cálculo del cubo de x
        resultado = x * x * x;
        printf("El resultado final es: %.2lf\n", resultado);
    }

    return 0;
}
