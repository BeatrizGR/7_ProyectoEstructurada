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
  int numbinario, binario[bits],i; /*Declaracion de variables*/

  printf("ingrese un numero en BINARIO\n"); /*Solicito al usuario ingresar un numero en decimal*/
  scanf("%d", &numbinario);                  /*lee mi variable*/

  for(exponente=0 ; exponente<=10 ; exponente++)
  for(i=0 ; numbinario>0 ; i++)
  {
    binario[i]=pow(numbinario,exponente);
    numbinario=pow(numbinario,exponente);
  }
  for(i=i-1 ; i>=0 ; i--)
  {
    printf("%d", numbinario);                 /*Imprime los resultados en la pantalla*/
  }
  puts("\n");
  return 0;
}
