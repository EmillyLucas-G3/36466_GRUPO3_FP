/* ========================================================
 * Problema 1.5. Conversión de unidades de tiempo
 * Programa que convierte segundos en días, horas, minutos y segundos.
 * Elaborado por: Israel Barahona
 * ======================================================== */

#include <stdio.h>

int main() {
    int c, dias, horas, minutos, segundos;
    int segundos_por_dia = 24 * 60 * 60;
    int segundos_por_hora = 60 * 60;
    int segundos_por_minuto = 60;

    printf("Ingrese el numero de segundos (c): ");
    scanf("%d", &c);

    dias = c / segundos_por_dia;
    segundos = c % segundos_por_dia;

    horas = segundos / segundos_por_hora;
    segundos = segundos % segundos_por_hora;

    minutos = segundos / segundos_por_minuto;
    segundos = segundos % segundos_por_minuto;

    printf("Equivale a: %d dias, %d horas, %d minutos y %d segundos.\n", dias, horas, minutos, segundos);

    return 0;
}
