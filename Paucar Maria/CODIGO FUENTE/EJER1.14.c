/*Ingrese dos números positivos el segundo numero deber de ser diferente
 de 0 caso contrario el programa muestra un mensaje que ambos números deben
  de ser positivos al ingresar los dos positivos calcula su mínimo común y el residuo
  Elaborado por Maria Fernanda Paucar
  PROBLEMA 1.14*/
#include <stdio.h>
int main() {
int num1, num2, copia1, copia2, residuo;
printf("Ingrese el primer numero positivo: ");
scanf("%d", &num1);
printf("Ingrese el segundo numero positivo: ");
scanf("%d", &num2);
if (num1 <= 0 || num2 <= 0) {
printf("Error: Ambos numeros deben ser enteros positivos (mayores a cero).\n");
} else {
copia1 = num1;
copia2 = num2;
while (num2 != 0) {
residuo = num1 % num2;
num1 = num2;
num2 = residuo;
}
printf("Resultado:\n");
printf("El Maximo Comun Divisor de %d y %d es: %d\n", copia1, copia2, num1);
}
return 0;
}
