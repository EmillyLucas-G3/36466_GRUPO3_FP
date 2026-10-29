/*Ingrese dos números enteros si se encuentran dentro del rango muestra el
resultado si no muestra un mensaje de que el numero ingresado esta fuera del rango
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.9*/
#include <stdio.h>

int main() {
    // Definición de variables como Entero (int)
    int n1, n2, num, i, es_primo;

    printf("Ingrese el primer numero del rango: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero del rango: ");
    scanf("%d", &n2);

    printf("Numeros primos encontrados en el rango:\n");

    // Ciclo Para traducido a un bucle 'for'
    for (num = n1; num <= n2; num = num + 1) {

        if (num > 1) {
            es_primo = 1;
            i = 2;

            // Bucle Mientras con operadores lógicos correspondientes (&& y ==)
            while (i < num && es_primo == 1) {
                if (num % i == 0) {
                    es_primo = 0;
                }
                i = i + 1;
            }

            // Si se determinó que el número es primo, se imprime
            if (es_primo == 1) {
                printf("%d\n", num);
            }
        }
    }

    return 0;
}
