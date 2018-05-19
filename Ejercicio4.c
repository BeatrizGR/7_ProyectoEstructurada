/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 ----------------------*/
/* Descripcion: Programa que imprime el numero mayor de un arreglo*/
/*---------------------------------------------------------*/


/* Declaracion de Bibliotecas */
#include <stdio.h>

/* Funcion principal */
int main(void)
{
  int array[10] = {1, 2, 5, 7, 8, 9, 12, 14, 15,30}, num_may;     /*Declaracion del arreglo*/

  printf("\nPrograma que imprime el numero mayor de un arreglo\n\n");

  for (int i = 0; i < 10; i++)                     /* Imprime el contenido del arreglo */
  {
    printf("%d ", array[i] );
  }
  num_may = array[0];                              /* Inicializa el numero mayor con el primer numero del arreglo */
  for (int i = 0; i < 10; i++)                     /* Ciclo que compara el dato de mayor con los demas numeros del arreglo*/
  {
    if (array[i] > num_may)
    {
      num_may = array[i];
    }
  }

  printf("\n\nEl numero mayor del arreglo es : %d\n", num_may );  /* Imprime el numero mayor */

  return 0;
}
