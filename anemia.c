/******************************************************************************

En un laboratorio de analisis clinico, un medico determina si una persona tiene anemia o no,
lo cual depende de su nivel de hemoglobina en la sangre, de su edad y de su genero.
se determinara su resultado como positivo y en caso contrario como negativo.
la tabla en la que la el medico se basa para obtener el resultado para sexo fen=menino es la siguiente:

EDAD        NIVEL HEMOGLOBINA
0 entre 1 mes                        entre 13 y 26 g%
> 1 y < = 6 meses                  entre 10 y 18 g%
> 6 y < = 12 meses                  entre 11 y 15 g%
> 1 y < = 5  a�os                        entre 11.5 y 15 g%
> 5 y < = 10 a�os                             entre 12.6 y 15.5 g%
> 10 y < = 15 a�os                           entre 13 y 15.5 g%


*******************************************************************************/
#include <stdio.h>

void main()
{
 int edad;
 float nivelHemo;
 printf("Ingrese su edad en meses:");
 scanf("%d",&edad);
 printf("Ingrese su nivel de hemoglobina:");
 scanf("%d",&nivelHemo);
 if(edad>=0 && edad<=1 && nivelHemo>=13 &&nivelHemo<=26)
         printf("No tiene anemia");
 else if(edad>1 && edad<=6 &&nivelHemo<=10&&nivelHemo<=18)
         printf("No tiene anemia");
 else if(edad>6 && edad<=12 &&nivelHemo>=11&&nivelHemo<=15)
         printf("No tiene anemia");
 else if(edad>12 && edad<-60 &&nivelHemo>-11.5&&nivelHemo<-15)
         printf("No tiene anemia");
 else if(edad>60 && edad<=120 &&nivelHemo>=12.6&&nivelHemo<=15.5)
         printf("No tiene anemia");
 else if(edad>120 && edad<=180 &&nivelHemo>=13&&nivelHemo<=15.5)
 		 printf("No tiene anemia");
 else
         printf("Tiene anemia");		  		 		 		         
 	
	
}
