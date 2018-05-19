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

/*Funcion principal*/
int main (void)
{

	int base, altura, area;

	printf("\n\nPrograma que es capaz de determinar el área de un rectangulo considerando la entrada de los valores desde el teclado\n\n");

	printf("Ingrese cuanto mide la altura del rectangulo: \n");
	scanf("%d",&altura);

	printf("Ingrese cuanto mide la base del rectangulo: \n");
	scanf("%d", &base);

	area = base * altura;
	printf("\nEl area del rectangulo es de: %d cm^2 \n", area);
	return 0;
}
