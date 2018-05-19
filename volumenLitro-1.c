/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 -----------------------*/
/*Descripcion:  Programa que nos resuelve cuántos litros de agua almacenará un tanque según las dimensiones que
le proporcione el cliente */
/*---------------------------------------------------------*/

/*Declaracion de bibliotecas*/
#include<stdio.h>
float volumen_rectangulo(float largo, float ancho, float altura );
int main(void)
{
	float altura, largo, ancho, volumen , Ltagua;

  printf("\n\nPrograma que nos resuelve cuántos litros de agua almacenará un tanque según las dimensiones que le proporcione el cliente\n\n");

	printf("Ingrese cuanto mide la altura del tanque: \n");
	   scanf("%f",& altura);

	printf("Ingrese cuanto mide el largo del tanque: \n");
	   scanf("%f",& largo);

	printf("Ingrese cuanto mide el ancho del tanque: \n");
	   scanf("%f",& ancho);

 volumen = volumen_rectangulo(largo, ancho, altura);
	Ltagua = volumen * 1000;

	printf("\nEl tanque almacenara %.2f litros de agua.\n", Ltagua );

	  return 0;
}
float volumen_rectangulo(float largo, float ancho, float altura )
{
  float volumen;
  volumen = largo * ancho * altura;
  printf("El volumen es de %.2f m³ \n", volumen );
  return volumen;
}
