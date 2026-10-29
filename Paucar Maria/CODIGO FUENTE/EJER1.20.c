/*Solicitamos al usurario que adivine el numero, deberá ingresar el numero que crea
que es el secreto si esta cerca muestra un mensaje que el numero es mas alto
y si sobre pasa el numero secreto le muestra un mensaje que es un numero mas bajo
hasta que acierte si lo hace al final le muestra la cantidad de intentos que le tomo acertar
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.20.*/
#include <stdio.h>

int main() {
    int secreto, intento, intentos;

    secreto = 42;
    intentos = 1;

    printf("Adivina el numero que pense entre 1 y 100:\n");
    scanf("%d", &intento);

    while (intento != secreto) {
        if (intento < secreto) {
            printf("El numero secreto es mas alto.\n");
        } else {
            printf("El numero secreto es mas bajo.\n");
        }

        intentos = intentos + 1;

        printf("Intenta otra vez:\n");
        scanf("%d", &intento);
    }

    printf("¡Acertaste!\n");
    printf("Usaste esta cantidad de intentos: %d\n", intentos);

    return 0;
}
