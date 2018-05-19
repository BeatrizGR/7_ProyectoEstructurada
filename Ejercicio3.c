/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 ----------------------*/
/* Descripcion:  Programa que convierte una cadena de caracteres de mayusculas a minusculas*/
/*--------------------------------------------------------*/

/* Declaracion de Bibliotecas*/
#include <stdio.h>

/*Funcion principal*/
int main(void)
{
  char palabra[] = { "BEATRIZ" }, min[8];                 /* Declaracion de la cadena de caracteres */
    printf("\nPrograma que convierte de mayusculas a minusculas\n\n" );

    printf("%s\n\n",palabra);

    for (int i = 0; i < 7; i++)
    {
        min[i] = palabra[i] + 32;                          /* Se usa el codigo a scii para convertir la palabra */
    }
    printf("%s\n\n", min);                                 /* Imprime la palabra en minusculas*/
  return 0;
}
