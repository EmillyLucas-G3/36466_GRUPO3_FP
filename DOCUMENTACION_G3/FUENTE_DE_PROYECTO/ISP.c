/*Avance del codigo para la automatizacion del corte de servicio  de un ISP
Elaborado por : Maria Fernanda Paucar
ISP */
#include <stdio.h>

void main()
{
    int op, n, i;
    char codigo[15];
    char fecha[15];
    int total = 0;

    do
    {
        printf("\n--- SISTEMA DE CORTES ISP (AVANCE) ---\n");
        printf("1. Nodo Llambilloc\n");
        printf("2. Nodo La Merced\n");
        printf("3. Nodo Huangopolo\n");
        printf("4. Salir\n");

        // Validar que escoja del 1 al 4
        do
        {
            printf("Escoja una opcion: ");
            scanf("%d", &op);
            if (op < 1 || op > 4)
            {
                printf("Error, opcion incorrecta.\n");
            }
        } while (op < 1 || op > 4);

        switch (op)
        {
            case 1:
            case 2:
            case 3:
                printf("\nIngrese la fecha de corte (ej. 13/11/2026): ");
                scanf("%s", fecha);

                printf("Cuantos clientes morosos va a ingresar?: ");
                scanf("%d", &n);

                total = 0; // reiniciar contador

                // Ciclo para ingresar los codigos del Excel
                for (i = 1; i <= n; i++)
                {
                    printf("\nIngrese codigo del cliente %d (ej. g001): ", i);
                    scanf("%s", codigo);

                    // Imprime el comando que va en el MikroTik
                    printf("Comando MikroTik: /ip firewall address-list add list=MORA address=[/ppp secret get [find name=\"%s\"] remote-address] comment=\"%s %s\"\n", codigo, fecha, codigo);

                    total++;
                }

                // Resumen final
                printf("\nTotal de clientes procesados: %d\n", total);
                break;

            case 4:
                printf("Saliendo...\n");
                break;
        }

    } while (op != 4);
}

