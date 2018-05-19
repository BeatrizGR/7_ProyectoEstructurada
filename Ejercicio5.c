/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 ----------------------*/
/* Descripcion: Programa que imprime el numero menor de un arreglo*/
/*---------------------------------------------------------*/


/*Declaracion de Bibliotecas*/
#include <stdio.h>

/* Funcion principal */
int main(void)
{
    int array[10] = {1, 2, 5, 7, 8, 9, 12, 14, 15,30}, num_men;     /* Declaracion del arreglo */

    printf("\n\nPrograma que imprime el numero menor de un arreglo\n\n");

    for (int i = 0; i < 10; i++)
    {
      printf("%d ", array[i] );                         /* Imprime el contenido del arreglo */
    }
    num_men = array[0];                                /* Inicializa el numero menor con el primer numero del arreglo */
    for (int i = 0; i < 10; i++)                       /* Ciclo que compara el dato de menor con los demas numeros del arreglo*/
    {
      if (array[i] < num_men)
      {
        num_men = array[i];
      }
    }
    printf("\n\nEl numero menor del arreglo es : %d\n", num_men );        /* Imprime los datos en pantalla */

  return 0;
}
