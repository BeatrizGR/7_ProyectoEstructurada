/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/04/2018 ---------------------------*/
/*Fecha de Actualizacion: 18/04/2018 ----------------------*/
/*Descripcion: programa que ordena un arreglo de números enteros de forma ascendente (se sugiere revisar el método de ordenamiento: burbuja).*/
/*---------------------------------------------------------*/

/* Biblioteca principal */
#include <stdio.h>

/*Funcion principal*/
int main()

{

	int arreglo[10], orden; /* Declaracion de variables */
	
	for (int i = 0; i < 10; ++i)/*solicita al usuario ingresar los datos */
	{
		printf("Ingrese el %d numero : \n \n", i+1 );
		scanf("%d", &arreglo[i]);
	}
	for (int i = 0; i < 10; ++i) 
	{
		for (int j = 0; j < 10; ++j)
		{
			if (arreglo[j] > arreglo[j+1])
			{
				orden = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = orden;
			}
		}
	} 

	for (int i = 0; i < 10; ++i)
	{
		printf("%d \n", arreglo[i] );
	}

	return 0;
}
