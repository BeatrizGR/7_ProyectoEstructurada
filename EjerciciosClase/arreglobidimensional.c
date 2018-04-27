/*--------------------------------------------------*/
/*Autor: Beatriz Garcia Rios -----------------------*/
/*E_mail: beatrizgarciarios@gmail.com --------------*/
/*Fecha de Creacion: 24/04/2018 --------------------*/
/*Fecha de Actualizacion: 24/04/2018 ---------------*/
/*Descripcion: */

#include<stdio.h>      /*Esta biblioteca contiene las definiciones de las macros, las constantes, las declaraciones de funciones                  */
#include<stdlib.h>     /*Esta biblioteca contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras  */
#include<time.h>       /*Esta biblioteca contiene funciones para manipular y formatear la fecha y hora del sistema                                */

/*Definicion de constantes*/
#define ROW 3        /*Numero de filas de la matriz            */
#define COL 3        /*Numero de columnas de la matriz         */
#define MAX 1000     /*rango superior de los datos aleatorios  */

/*Funcion principal*/
int main (void)
{
  int array[ROW][COL];          /*Declaracion de los arreglos que seran las filas y las columnas*/
  srand((unsigned)time(NULL));  /*Instrucción que inicializa el generador de números aleatorios*/

/*Inicializar el array con valores enteros aleatorios 1-100*/
for(int i=0; i<ROW;i++) /*ciclo que controla las filas del array*/
{
  printf("{");
/*asignacion de datos a array*/
    for(int j=0; j<COL;j++) /*ciclo que controla las columnas del array*/
    {
      printf("%d", array[i][j]);
      /*asignacion de datos al array*/
      /*utilizar la funcion scanf() para solicitar datos al usuario*/

      /*utilizar la funcion rand[] para obtener datos de forma aleatoria*/
      /*La funcion se encuentra definida dentro de la biblioteca stdio.h*/
      array[i][j]=rand()%(MAX+1);
      /*Tarea: el dia viernes 27 de abril*/
      /*generar valores aleatorios de tipo flotante entre 0-1000*/
    }
}
printf("\x1b[32m Datos aleatorios de la matriz: array[%d][%d]\n",ROW,COL );   /*Imprime las filas y las columnas de forma aleatoria*/
printf("\x1b[42m Otro mensaje\n]");                  /*Imprime color verde*/                        /**/
printf("\x1b[0m Otro mensaje\n");                    /*Imprime RESET*/

printf("\n");                                  /*Salto de linea*/
    for (int i=0 ; i<ROW; i++)                 /*Inicializacion del ciclo*/
      {
        printf("{");
        for(int j=0 ; j<COL ; j++)            /*Iniciacion del ciclo*/
        {
          printf("%d ", array[i][j]);       /*Imprime el arreglo*/
        }
        printf("}\n");                         /*Salto de linea*/
      }

return 0;
}
