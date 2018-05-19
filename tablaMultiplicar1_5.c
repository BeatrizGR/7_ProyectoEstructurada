/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 -----------------------*/
/*Descripcion:  Programa que nos muestra la tabla de multiplicar del 1 a la 5*/
/*---------------------------------------------------------*/

/*Declaracion de Bibliotecas*/
#include<stdio.h>

int main (void)
{
	int num=1, cont;

	for(num=1; num<=5;num++)
	{
					printf("\nTabla de multiplicar del %d\n\n", num);
		{
		for(cont=0; cont<=num;cont++)
		{
			for(cont=0;cont<=10;cont++)
			{
				printf("%d\tX\t%d\t=\t%d\n", num, cont,(num * cont));
			}
	  }
		{
			printf("\n");
		}
	}
}
	return 0;
}
