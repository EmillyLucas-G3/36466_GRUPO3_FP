/*Ingrese un numero tiene que evaluar el programa si es copicua o no si lo es el
programa da como salida el mensaje que si es copicua en caso de ser falso muestra
un mensaje que no es copicua
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.13*/
#include <stdio.h>

int main() {
    // Definición de variables como Entero (int)
    int num_original, num_aux, num_invertido, digito;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &num_original);

    // Validación si el número es negativo
    if (num_original < 0) {
        printf("Por favor, ingrese un numero entero positivo valido.\n");
    } else {
        num_aux = num_original;
        num_invertido = 0;
           // Bucle Mientras (while) para invertir el número dígito por dígito
        while (num_aux > 0) {
            digito = num_aux % 10;                     // Extraemos el último dígito (Mod)
            num_invertido = (num_invertido * 10) + digito; // Construimos el número al revés
            num_aux = num_aux / 10;                   // Eliminamos el último dígito (Trunc)
        }

        // Comparación final (recordando usar el doble igual ==)
        if (num_original == num_invertido) {
            printf("El numero %d si es capicua.\n", num_original);
        } else {
            printf("El numero %d no es capicua.\n", num_original);
        }
    }

    return 0;
}
