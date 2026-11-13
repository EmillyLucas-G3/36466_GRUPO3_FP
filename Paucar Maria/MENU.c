/*Se presenta un menu de 3 opciones la primera opcion donde puede visualizar la figura de un cuadrado
la segunda opcion tenemos una serie de fibonacci y por ultimo para salir del menu
Elaborado por: Maria Fernanda Paucar
MENU*/
#include <stdio.h>

void figura(); //declaracion de funciones
int fibonacci(int n);

void main()
{
    int op, n, i;

    do
    {
        printf("\n-----------------------\n");
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");

        // validacion de las opciones
        do
        {
            printf("Elija una opcion: ");
            scanf("%d", &op);

            if (op < 1 || op > 3)
            {
                printf("Error. Opcion no valida, intente de nuevo por favor.\n");
            }
        } while (op < 1 || op > 3);

        switch (op)
        {
            case 1:
                figura();
                break;

            case 2:
                printf("\nIngrese cuantos numeros desea ver por favor: ");
                scanf("%d", &n);

                printf("La serie es: ");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", fibonacci(i));
                }
                printf("\n");
                break;

            case 3:
                printf("\nSalir del programa...\n");
                break;
        }
    } while (op != 3);
}

//  función cuadrado
void figura()
{
    int i, j, n; // i=filas, j=columnas
    do
    {
        printf("\nIngrese el lado del cuadrado por favor: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++) // filas
    {
        for (j = 1; j <= n; j++) // columnas
        {
            printf("*");
        }
        printf("\n");
    }
}

// función fibonacci
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
