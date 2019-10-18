/******************************************************************************

Determinar el factorial de un numero

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,numero,resp=1;
    printf("Ingrese un numero:\t");
    scanf("%d",&numero);
    for(cont=1;cont<=numero;cont++)
    {
        resp=resp*cont;
    }
    printf("%d",resp);
}

