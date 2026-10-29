/*Ingrese la cantidad de segundos que requiera saber el dia, hora, minutos y segundos
Elaborado por Maria Fernanda Paucar
PROBLEMA 1.5*/

#include <stdio.h>

int main() {
    // Definición de variables como Entero (int)
    int c, d, h, m, s;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &c);

    // En C, la división entre enteros automáticamente trunca el resultado
    d = c / 86400;
    c = c % 86400;

    h = c / 3600;
    c = c % 3600;

    m = c / 60;
    s = c % 60;

    // Impresión de resultados
    printf("Resultado:\n");
    printf("%d dias\n", d);
    printf("%d horas\n", h);
    printf("%d minutos\n", m);
    printf("%d segundos\n", s);

    return 0;
}
