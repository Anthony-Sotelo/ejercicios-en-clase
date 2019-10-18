/******************************************************************************

Realizar un programa que permita ingresarn numeros enteros

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,tabla,lim,mult=0;
    printf("Ingrese la tabla:");
    scanf("%d",&tabla);
    printf("Ingrese el limite:");
    scanf("%d",&lim);
    for(cont=1;cont<=lim;cont++)
    {
        mult=tabla*cont;
        printf("%dX%d=%d\n",tabla,cont,mult);
        
    }
}
