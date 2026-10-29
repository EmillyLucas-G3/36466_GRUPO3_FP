/*Ingresamos la cantidad de números que deseamos el programa termina
cuando ingresemos el 0 y al final dará como resultado cual es el
 mnumero mayor y el consecutivo
 Elaborado por Maria Fernanda
 PROBLEMA 1.19 */
#include <stdio.h>

int main() {
    int num, mayor, segundo_mayor, contador;

    mayor = 0;
    segundo_mayor = 0;
    contador = 0;

    printf("Ingrese un numero entero positivo (0 para terminar):\n");
    scanf("%d", &num);

    // Mientras num <> 0 se traduce como num != 0
    while (num != 0) {
        if (num < 0) {
            printf("Por favor, ingrese solo numeros positivos.\n");
        } else {
            contador = contador + 1;

            if (num > mayor) {
                segundo_mayor = mayor;
                mayor = num;
            } else {
                if (num > segundo_mayor) {
                    segundo_mayor = num;
                }
            }
        }

        printf("Ingrese otro numero entero positivo (0 para terminar):\n");
        scanf("%d", &num);
    }

    if (contador < 2) {
        printf("Error: Se necesitan al menos dos valores positivos para calcular el segundo mayor.\n");
    } else {
        printf("El numero mayor es: %d\n", mayor);
        printf("El segundo numero mayor es: %d\n", segundo_mayor);
    }

    return 0;
}
