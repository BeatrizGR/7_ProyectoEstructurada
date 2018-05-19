/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 ----------------------*/
/* Descripcion: programa que permite crear un arreglo------*/
/* 		unidimensional de tipo flotante, de tamaño 10--------*/
/*---------------------------------------------------------*/

/* Declaracion de Biblioteca */
#include <stdio.h>

/*Funcion principal*/
int main(void)
{
  float array[10] = {10.5, 11.5, 12.5, 13.5, 14.5,  15.55, 16.5, 17.5, 18.5, 19.5}, array_copy[10];  /* Declaracion del arreglo */

    printf("\n\nPrograma que copia un arreglo en otro\n");    /*Imprime la funcion del programa*/
    printf("\nArreglo Original:\n");
    for (int i = 0; i < 10; i++)
      {
          printf(" %.2f ", array[i] );          /*imprime el primer arreglo */
      }
    for (int i = 0; i < 10; i++)              /* Ciclo que nos sirve para copiar de un arreglo a otro*/
    {
      array_copy[i] = array[i];
    }
    printf("\n\nArreglo copiado:\n");         /* Imprime el enunciado de que el arreglo a sido copiado */
    for (int i = 0; i < 10; i++)
    {
        printf(" %.2f ", array_copy[i]);    /* Imprime la copia de un arreglo a otro */
    }
  printf("\n\n");                               /*Imprime un salto de linea*/
  return 0;
}
