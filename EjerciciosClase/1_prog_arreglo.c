/*---------------------------------------------------------*/
/*Autor: Beatriz Gracia Rios-------------------------------*/
/*E mail : beatrizgarciarios1808@gmail.com-----------------*/
/*Fecha de Creacion: 13/04/2018----------------------------*/
/*Fecha de actualizacion: 17/04/2018-----------------------*/
/*Descripcion: programa que sirve para saber cuantas veces */
/*se repite un numero natural dentro de un arreglo unidimensional.*/
/*---------------------------------------------------------*/

/*declaracion de bibliotecas*/
#include <stdio.h>

int main (void)

#define  TAM 10

{
/* Declaracion e inicializacion del arreglo */
  int arreglo [TAM]= {0,1,2,2,3,7,8,8,9,10};
  int contador [TAM]= {};
  int i,j;
  for (i=0; i<TAM; i++)
{
  for (j=0; j<TAM; j++)
{
  if (arreglo[i]==arreglo[j])
  contador[i]++;			/*imprime los resultados del conteo*/
}
printf ("el  numero %d se repite %d veces \n", arreglo [i], contador[i]);
}
return 0;
}

