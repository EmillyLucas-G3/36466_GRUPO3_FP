/*GRUPO3
El porgrama debera ser un menu de 3 opcion la primera visualizacion de un vector
segundo la visualizacion de una matriz y como ultima opcion salir
Elaborado por GRUPO3*/

#include <stdio.h>

//FU7NCION MATRIZ
void opcionMatriz() {
    float temp;
    int filas, columnas;

    // filas (> 0 y sin decimales)
    do {
        printf("\nIngrese el numero de filas: ");
        temp = 0;
        scanf("%f", &temp);
        while (getchar() != '\n');

        if (temp <= 0 || temp != (int)temp) {
            printf("ERROR el valor ingresado no puede ser cero, negativo o decimal.\n");
            filas = 0;
        } else {
            filas = (int)temp;
        }
    } while (filas <= 0);

    //  columnas (> 0 y sin decimales)
    do {
        printf("Ingrese el numero de columnas: ");
        temp = 0;
        scanf("%f", &temp);
        while (getchar() != '\n');

        if (temp <= 0 || temp != (int)temp) {
            printf("ERROR el valor ingresado no puede ser cero, negativo o decimal.\n");
            columnas = 0;
        } else {
            columnas = (int)temp;
        }
    } while (columnas <= 0);

    float matriz[filas][columnas];
    printf("\nDATOS MATRIZ\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            do {
                printf("Elemento [%d][%d]: ", i + 1, j + 1);
                matriz[i][j] = 0;
                scanf("%f", &matriz[i][j]);
                while (getchar() != '\n');

                if (matriz[i][j] <= 0) {
                    printf("ERROR el valor no puede ser cero o negativo\n");
                }
            } while (matriz[i][j] <= 0);
        }
    }
    printf("\nMatriz ingresada\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}
// FUNCION VECTOR
void opcionVector() {
    float temp; // Variable temporal para  decimales
    int n;

    // Validar tamano del vector (> 0 y sin decimales)
    do {
        printf("\nIngrese el tamano del vector por favor: ");
        temp = 0;
        scanf("%f", &temp);
        while (getchar() != '\n'); // Vacia el teclado

        if (temp <= 0 || temp != (int)temp) {
            printf("ERROR:El tamano no puede ser cero, negativo o decimal.\n");
            n = 0;
        } else {
            n = (int)temp; // Se guarda el entero sin decimales
        }
    } while (n <= 0);

    int vector[n];

    // Llenar el vector
    printf("\nIngreso del vector\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("Elemento [%d]: ", i + 1);
            temp = 0;
            scanf("%f", &temp);
            while (getchar() != '\n'); // Vacia el teclado

            if (temp <= 0 || temp != (int)temp) {
                printf("ERROR:el valor del vector no puede ser cero, negativo o decimal.\n");
                printf("Intente nuevamente.\n");
                vector[i] = 0;
            } else {
                vector[i] = (int)temp;
            }
        } while (vector[i] <= 0);
    }

    // Imprimir el vector
    printf("\nVector ingresado\n");
    for (int i = 0; i < n; i++) {
        printf("[%d] ", vector[i]);
    }
    printf("\n");
}
// FUNCIONES
void opcionVector();
void opcionMatriz();

int main() {
    int opcion;

    do {
        printf("\n=========================================\n");
        printf("             MENU PRINCIPAL              \n");
        printf("1.VECTOR\n");
        printf("2.MATRIZ\n");
        printf("3. Salir\n");
        printf("Elija una opcion por favor: ");

        opcion = 0;
        scanf("%d", &opcion);
        while (getchar() != '\n'); // Limpia cualquier letra o decimal que quede

        switch (opcion) {
            case 1:
                opcionVector();
                break;

            case 2:
                opcionMatriz();
                break;

            case 3:
                printf("\nSALIR DEL PROGRAMA\n");
                break;

            default:
                printf("\nOpcion incorrecta.\n");
                break;
        }

    } while (opcion != 3);

    return 0;
}


