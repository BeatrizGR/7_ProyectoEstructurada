/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*fecha de Creacion: 19/04/2018 ---------------------------*/
/*Fecha de Actualizacion: ---------------------------------*/
/*Descripcion: Programa que convierte de decimal a binario y viceversa*/
/*---------------------------------------------------------*/

/*Declaracion de bibliotecas*/
#include <stdio.h>
#include <math.h>

#define bits 16 /*Defino mi constante bits*/

/*Funcion principal*/
int main(void)
{
  int numdecimal, decimal[bits],i, digitos, cont, suma=0 ; /*Declaracion de variables*/

  printf("Conversion de un numero decimal a binario\n"); /*Subtitulo de mi primer conversion*/
  printf("ingrese un numero en decimal\n"); /*Solicito al usuario ingresar un numero en decimal*/
  scanf("%d", &numdecimal);                  /*lee mi variable*/

  for(i=0 ; numdecimal>0 ; i++)     /*Inicializacion del ciclo*/
  {
    decimal[i]=numdecimal%2;
    numdecimal=numdecimal/2;
  }
  for(i=i-1 ; i>=0 ; i--)
  {
    printf("%d", decimal[i]);                 /*Imprime los resultados en la pantalla*/
  }
  puts("\n");

  printf("Conversion de un numero en binario a un numero decimal\n"); /*Subtitulo de mi segunda conversion*/
  printf("Cuantos digitos tiene el numero en binario:\n");   /*Solicita al usuario ingresar el numero de dijitos*/
  scanf("%d", &digitos);                                      /*Lee la variable*/
  int binario[digitos];
  int m=digitos;

  for(int j=0;j<digitos;j++)
  {
    printf("Ingrese el %d digito: ",m );                   /*Solicita al usuario ingresar dijito por dijito*/
    scanf("%d", &binario[j]);
    m=m-1;

  }
      for(int j=0 ; j<digitos ; j++)                      /*Inicializacion del ciclo*/
      {
        if (binario[j]==1)                               /*condicion para calcular el valor del exponente*/
        {
          cont = pow(2,j);
          suma=suma + cont;                               /*Suma los valores obtenidos*/
        }
      }
  printf("La conversion de su numero en binario es: %d en decimal",suma);

  puts("\n");
  return 0;
}
