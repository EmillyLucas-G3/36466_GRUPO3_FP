#include <stdio.h>

int main() {
    // Declaración de variables de tipo real (float)
    float num1, num2, media;

    // Entrada de datos por teclado
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    // Cálculo de la media
    media = (num1 + num2) / 2;

    // Impresión del resultado en pantalla
    printf("La media de los dos valores es: %.2f\n", media);

    return 0;
}
