/*Ingrese un numero entero positivo debe de ser divisible para si mismo y
el residuo debe de ser o para que sea primo si no lo es muestra que el
numero ingresado no es primo
Elaborado por Maria Fernanda Paucar
PROBOLEMA 1.8*/
#include <stdio.h>

int main() {
    // Definición de variables como Entero (int)
    int N, i, cont;

    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &N);

    // Validación si el número es menor o igual a 1
    if (N <= 1) {
        printf("Error: El numero debe ser mayor que 1.\n");
    } else {
        cont = 0;
        i = 2;

        // Bucle Mientras (while) para buscar divisores
        while (i < N) {
            // Operador residuo (%) reemplaza a Mod
            if (N % i == 0) {
                cont = cont + 1;
            }
            i = i + 1;
        }

        // Validación final de primos
        if (cont == 0) {
            printf("El numero %d si es primo.\n", N);
        } else {
            printf("El numero %d no es primo.\n", N);
        }
    }

    return 0;
}
