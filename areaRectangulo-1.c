/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 -----------------------*/
/*Descripcion:  Programa que nos resuelve cuántos litros de agua almacenará un tanque según las dimensiones que
le proporcione el cliente */
/*---------------------------------------------------------*/

/*Declaracion de Bibliotecas*/
#include<stdio.h>
float area(float base, float altura);
/*Funcion principal*/
int main (void)
{

 	float base, altura, areaf;

	printf("\n\nPrograma que es capaz de determinar el área de un rectangulo considerando la entrada de los valores desde el teclado\n\n");

	printf("Ingrese cuanto mide la altura del rectangulo: \n");
	scanf("%f",&altura);

	printf("Ingrese cuanto mide la base del rectangulo: \n");
	scanf("%f", &base);

	areaf = area(base,altura);
	printf("\nEl area del rectangulo es de: %f cm^2 \n", area);
	return 0;
}
float area(float base, float altura)
{
  return base * altura;
}
