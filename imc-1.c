/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 24/04/2018 ---------------------------*/
/*Fecha de Actualizacion: 24/04/018 -----------------------*/
/*Descripcion: Programa que calcula el Indice de Masa Corporal de una persona ingresando sus datos desde el teclado*/
/*---------------------------------------------------------*/

/* Declaracion de bibliotecas */
#include <stdio.h>
float imc(float peso, float altura);
/* Declaracion de la funcion principal */
int main(void)
{
	int p;
 	float IMC, a;
	printf("\nPrograma que calcula el Indice de Masa Corporal de una persona\n");
 	printf("\nIntroduzca peso en kilogramos: ");
 	scanf("%d", &p);
 	printf("\nIntroduzca altura en metros: ");
 	scanf("%f", &a);
 	IMC = imc(p,a);

	printf("\nSu IMC es de %.2f \n",IMC);
return 0;
}
float imc(float peso, float altura)
{
	int IMC;
	 	IMC = peso/(altura*altura);
	return IMC;
}
