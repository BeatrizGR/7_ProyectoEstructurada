/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*fecha de Creacion: 19/04/2018 ---------------------------*/
/*Fecha de Actualizacion: ---------------------------------*/
/*Descripcion: Programa que convierte de decimal a binario*/
/*---------------------------------------------------------*/

/*Declaracion de bibliotecas*/
#include <stdio.h>
#include<math.h>

#define bits 16 /*Defino mi constante bits*/

/*Funcion principal*/
int main(void)
{
  int numbinario, binario[bits],i, numdecimal; /*Declaracion de variables*/

  printf("ingrese un numero en decimal\n"); /*Solicito al usuario ingresar un numero en decimal*/
  scanf("%d", &numbinario);                  /*lee mi variable*/

  for(i=0 ; numbinario>0 ; i++)
  {
    binario[i]=numbinario%2;
    numbinario=numbinario/2;
  }
  for(i=i-1 ; i>=0 ; i--)
  {
    printf("%d", binario[i]);                 /*Imprime los resultados en la pantalla*/
  }
  puts("\n");

  printf("ingrese un numero en binario\n"); /*Solicito al usuario ingresar un numero en decimal*/
  scanf("%d", &numdecimal);                  /*lee mi variable*/

  for(i=0 ; i=0 ; i++)
  {
    binario[i]=pow(numdecimal,0);
    numdecimal=pow(numdecimal,0+1);
  }
  for(i=5 ; i>=0 ; i--)
  {
    printf("%d",numdecimal);                 /*Imprime los resultados en la pantalla*/
  }

  return 0;
  }
