/******************************************************************************

Realizar un programa que permita generar n numeros enteros.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,nnum,numeros,suma=0;
    printf("Cuantos números va a ingresar:");
    scanf("%d",&nnum);
    while(cont<=nnum)
    {
        printf("Ingrese un numero:");
        scanf("%d",&numeros);
        suma=suma+numeros;
        cont++;
    }
    printf("La suma de %d numeros es %d\n",nnum,suma);
}


