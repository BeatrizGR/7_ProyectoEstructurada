/*--------------------------------------------------*/
/*Autor: Beatriz Garcia Rios -----------------------*/
/*E_mail: beatrizgarciarios@gmail.com --------------*/
/*Fecha de Creacion: 24/04/2018 --------------------*/
/*Fecha de Actualizacion: 24/04/2018 ---------------*/
/*Descripcion: Programa que imprime tres tipos de matrices */
/*--------------------------------------------------*/

#include<stdio.h>

int main (void)
{
  int matriz[3][3] = { {1,2,3,},{1,2,3},{1,2,3} };
  int matrizR[3][6] = { {1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6 }};
    int matrizGR[3][1] = { {6},{6},{6 }};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf(" %d ", matriz[i][j]);
    }
    printf("\n" );
  }
  printf("\n\n\n" );
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      printf(" %d ", matrizR[i][j]);
    }
    printf("\n\n\n" );
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 1; j++)
    {
      printf(" %d ", matrizGR[i][j]);
    }
    printf("\n" );
  }
  return 0;
}
