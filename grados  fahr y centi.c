/******************************************************************************

Realizar un programa que me permita convertir de grados centigrados a farengeit o viceversa

*******************************************************************************/
#include <stdio.h>

int main()
{
    float cent,fahr,gradosCent=0,gradosFahr=0;
    int op;
    printf("Menu Principal\n1.Grados centigrados a fahrenheit\n2.Grados fahrenheit a centigrados\n");
    printf("Escoja una opcion:");
    scanf("%d",&op);
    if(op==1)
    {
      printf("Ingrese los grados centigrados:");
      scanf("%d",&cent);
      gradosFahr=((cent*9)/5)+32;
	  printf("Grados fahrenheit:%.2f",gradosFahr);	
	}
	else
	{
	    printf("Ingrese los grados fahrenheit:");
	    scanf("%d",&fahr);
	    gradosCent=((fahr-32)*5)/9;
        printf("Grados centigrados:%.2f",gradosCent);
	}
    
	
	
}

