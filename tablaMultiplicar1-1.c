/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 -----------------------*/
/*Descripcion:  Programa que nos muestra la tabla de multiplicar del numero 1 */
/*---------------------------------------------------------*/

/*Declaracion de Bibliotecas*/
#include<stdio.h>

int main (void)
{
	int num=1, cont;
	printf("\nTabla de multiplicar del numero 1\n\n");

	for(cont=0; cont<=num;cont++)
	{
		for(cont=0;cont<=10;cont++)
		{
			printf("%d\tX\t%d\t=\t%d\n", num, cont,(num * cont));
		}
	}
	return 0;
}
