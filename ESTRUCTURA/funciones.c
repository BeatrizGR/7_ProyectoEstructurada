/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 24/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 24/05/2018 ----------------------*/
/* Descripcion: Funciones Estructura de peceras ---------------------*/
/*---------------------------------------------------------*/

/* Declaracion de bibliotecas */
#include <stdio.h>

struct pecera
int litraje(int litraje)
int altura(int altura);
char modelo(char modelo);
char tipo_de_vidrio(char tipo_de_vidrio);
int ancho(int ancho);
int largo(int largo);
float base(float base);

int main (void)
{
  int ancho = 200;
  int altura = 100;

    int ancho = ancho (ancho);
  printf("\nel ancho de la pecera es  %d ",ancho );

  struct pecera = pecera();
  pecera  = peceras();

printf("\n el litraje de la pecera es  %d",pecera.litraje );
printf("\nla altura de la pecera es  %s",pecera.altura );
printf("\n el modelo de la pecera es  %s",pecera.modelo );
printf("\nla  base de la pecera es  %f",pecera.base );
  return 0;
}
struct pecera pecera(void)
{
  struct pecera = {30};
  return pecera1;
}
