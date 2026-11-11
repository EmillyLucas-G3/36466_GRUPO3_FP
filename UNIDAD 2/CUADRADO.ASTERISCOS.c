/*En el programa se debera de visualizar la forma de un cuadrado
el cual debe de estar relleno de asteriscos las filas y columnas
van a depender del numero que el usuario ingrese por consola

********
********
********
********

Elaborado por Maria Fernanda Paucar*/

#include <stdio.h>

void main(){
int i, j, n; //i=filas, j=columas
do {
    printf ("Ingrese el lado del cuadrado por favor: ");
    scanf ("%d",&n);// guardado en la memoria
}
while (n<=0);

for (i=1; i<=n;i++) //filas
{
    for (j=1 ; j<=n ; j++) //columnas
        printf ("*");
    printf ("\n");
}
}
