/*Se presenta un menu de 3 opciones la primera opcion se puede visualizar la figura de un cuadrado
la segunda opcion tenemos una serie y su suma total  y por ultimo para salir del menu
Elaborado por: Maria Fernanda Paucar
MENU*/

#include <stdio.h>

// Declaracion de funciones
void cuadradoHueco(int lado);
void seriePotencia(int limite, int exp);

int main() {
    int op, lado, n, exp;

    do {
        printf("\n---------------MENU---------------\n");
        printf("1. Grafico Cuadrado \n");
        printf("2. Serie numeros elevados y su suma\n");
        printf("3. Salir\n");
        printf("Elija una opcion por faovr: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\nIngrese el lado del cuadrado por favor : ");
                scanf("%d", &lado);
                cuadradoHueco(lado);
                break;

            case 2:
                printf("\nIngrese cuantos numeros quiere ver en la serie: ");
                scanf("%d", &n);
                printf("Ingrese el exponente: ");
                scanf("%d", &exp);
                seriePotencia(n, exp);
                break;

            case 3:
                printf("\nFin del programa.\n");
                break;

            default:
                printf("\nOpcion no valida, Intente nuevamente por favor.\n");
        }
    } while (op != 3);

    return 0;
}

// Funcion cuadrado hueco
void cuadradoHueco(int lado) {
    int i, j;
    printf("\n");
    for (i = 1; i <= lado; i++) {
        for (j = 1; j <= lado; j++) {
            if (i == 1 || i == lado || j == 1 || j == lado) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// Funcion serie y su suma
void seriePotencia(int limite, int exp) {
    int i, j, pot, suma = 0;

    printf("\nSerie: ");
    for (i = 1; i <= limite; i++) {
        // Calculo de la potencia multiplicando varias veces
        pot = 1;
        for (j = 1; j <= exp; j++) {
            pot = pot * i;
        }

        suma = suma + pot;
        printf("%d ", pot);
    }

    printf("\nLa suma total es: %d\n", suma);
}
