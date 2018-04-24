/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*fecha de Creacion: 19/04/2018 ---------------------------*/
/*Fecha de Actualizacion: ---------------------------------*/
/*Descripcion: Programa que lee letras en munusculas y mayusculas */
/*---------------------------------------------------------*/

#include<stdio.h>

const int tamanio = 5;/*Definir una constante*/

int main(void)
{
  char c;
  char array[tamanio];

  int index = 0;
  while ((c=getchar()) !='\n') /*Leer de caracter a caracter*/
{
  if(c>= 97 && c<=122) /*Validar unicamente caracter letras minusculas*/
  {
    c=c-32;
    array[index] = c;
    index++;
  }
}

  printf("\n");
  for(int i = 0; i < tamanio; i++)
  {
    printf("%c",array[i]);
  }
  printf("\n");
  return 0;
}
