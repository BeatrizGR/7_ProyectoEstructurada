/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de creacion: 17/04/2018 ---------------------------*/
/*Fecha Actualizacion: 18/04/2018 -------------------------*/
/*Descripcion: programa que muestra la declaración de constantes con #define y const y que muestra en pantalla los valores de las constantes. Así mismo, define 6 macros para simular las operaciones (suma, resta, multiplicación, división y potencia) he imprimir los valores en pantalla. También se deberán simular los ciclos for, while y do-while.*/
/*---------------------------------------------------------*/


/* Biblioteca principal */
#include <stdio.h>

/*Funcion principal*/
int main()

{
	int arreglo[10], orden; /* Declaracion de variables */

	for (int i = 0; i < 10; ++i)/* pide datos al usuario */
		{
			printf("Ingrese el %d numero : \n", i+1 );
				scanf("%d", &arreglo[i]);
		}

	for (int i = 0; i < 10; ++i) 
	{
		for (int j = 0; j < 10; ++j)
		{
			if (arreglo[j]>arreglo[j+1])
				{
					orden = arreglo[j];
					arreglo[j] = arreglo[j+1];
					arreglo[j+1] = orden;
				}
		}

	} 
	printf(" \n %d es el numero menor \n", arreglo[0]); /* Imprime los resultados en pantalla*/

	printf("\n %d es el numero mayor \n", arreglo[9]);

	return 0;
}
