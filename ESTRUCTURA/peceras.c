/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 24/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 24/05/2018 ----------------------*/
/* Descripcion: Estructura de peceras ---------------------*/
/*---------------------------------------------------------*/

/* Biblioteca principal */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct pecera
{
	char modelo[30];
	char tipo_de_vidrio[20];
	int altura;
	int ancho;
	int largo;
	float litraje;
	char base[20];
}peceras[20];
int main(void)
{
	int opcion, n;
	printf("ACUARIOS\n");
	printf("1.- Numero de peceras a registrar\n");
	printf("2.- Registrar datos de pecera\n");
	printf("3.- Imprimir datos de peceras disponibles\n");
	printf("4.- Mostrar peceras por litraje\n");
	printf("5.- Salir\n");
	do{
		printf("\nIngrese una opcion : ");
			scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("Ingrese un numero de peceras a registrar : ");
					scanf("%d", &n);
				printf("\n\n\n" );
				for (int i = 0; i < n; ++i)
					{
						printf("\nIngrese el modelo de la pecera %d : ", i+1 );
							scanf("%s", peceras[i].modelo);

						printf("\nIngrese el tipo de vidrio : ");
							scanf("%s", peceras[i].tipo_de_vidrio);

						printf("\nIngrese la altura de la pecera : ");
							scanf("%d", &peceras[i].altura);
						printf("\nIngrese el ancho de la pecera : ");
							scanf("%d", &peceras[i].ancho);
						printf("\nIngrese el largo de la pecera : ");
							scanf("%d", &peceras[i].largo);
						peceras[i].litraje = (peceras[i].altura * peceras[i].largo * peceras[i].ancho)*1000;
						printf("\n\n\n");
					}
			break;


			case 2:
			break;


			case 3:
				for (int i = 0; i < n; ++i)
					{
						printf("\n\n\nPecera %d \n", i+1);
						printf("Modelo : %s \n", peceras[i].modelo  );
						printf("Tipo de vidrio : %s\n",peceras[i].tipo_de_vidrio );
						printf("Altura de la pecera : %d \n", peceras[i].altura);
						printf("Ancho de la pecera : %d \n", peceras[i].ancho  );
						printf("Largo de la pecera : %d \n", peceras[i].largo );
						printf("Litraje de la pecera : %.2f\n", peceras[i].litraje );
						printf("\n\n\n");
					}
			break;


			case 4:
			break;


			case 5:
				printf("Saliendo del programa.\n");
			break;
		}
	}while (opcion < 5 && opcion > 0);
	return 0;
}
//scanf("%[^\n]s"
