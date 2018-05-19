/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/05/2018 ---------------------------*/
/*Fecha de Actualizacion: 17/05/2018 ----------------------*/
/* Descripcion: Programa que convierte una cadena de caracteres de minusculas a mayusculas*/
/*---------------------------------------------------------*/


/* Declaracion de Bibliotecas */
#include <stdio.h>

/*Funcion principal*/
int main(void)
{
  char palabra[] = { "beatriz" }, may[8];              /* Declaracion de la cadena de caracteres */

    printf("Programa que convierte de minusculas a mayusculas\n\n");

    printf("%s\n\n", palabra );

    for (int i = 0; i < 7; i++)
    {
        may[i] = palabra[i]-32;                          /* Se usa el codigo a scii para convertir la palabra */
    }
    printf("%s\n\n", may);                                 /* Imprime la palabra en mayusculas */
  return 0;
}
