/*Ingrese un numero positivo entero el cual al pasar por la calculadora
dará como resultado su binario
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.17 */
#include <stdio.h>

int main() {
    int num_decimal, copia_decimal, residuo;
    long long num_binario, posicion;

    printf("Ingrese un numero entero positivo:\n");
    scanf("%d", &num_decimal);

    if (num_decimal < 0) {
        printf("Error: Debe ingresar un numero mayor o igual a cero.\n");
    } else {
        if (num_decimal == 0) {
            printf("El numero 0 en binario es: 0\n");
        } else {
            copia_decimal = num_decimal;
            num_binario = 0;
            posicion = 1;

            while (num_decimal > 0) {
                residuo = num_decimal % 2;
                num_binario = num_binario + (residuo * posicion);
                num_decimal = num_decimal / 2;
                posicion = posicion * 10;
            }

            printf("El numero %d en binario es: %lld\n", copia_decimal, num_binario);
        }
    }

    return 0;
}
