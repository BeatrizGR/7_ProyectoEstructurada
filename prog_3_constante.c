/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 17/04/2018 ---------------------------*/
/*Fecga de Actualizacion: 18/04/2018 ----------------------*/
/*Descripcion: programa que muestra la declaración de constantes con #define y const y que muestra en pantalla los valores de las constantes. Así mismo, definir 6 macros para simular las operaciones (suma, resta, multiplicación, división y potencia) he imprimir los valores en pantalla. También se deberán simular los ciclos for, while y do-while.*/
/*---------------------------------------------------------*/

/*Declaracion de bibliotecas*/
#include <stdio.h>

/* DECLARACION DE CONSTANTES CON #define*/
/* No se reservan espacios en memoria */
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN  0
#define MAX 100

/* Implementacion de macro */
#define SUMA(x, y) x+y
#define RESTA(x, y) x-y
#define MULT(x, y) x*y
#define DIV(x, y) x/y
#define POTCUADRADO(x) x*x
#define POTCUBO(x) x*x*x

/* Definir ciclos con macro */
#define CICLOFOR(x, y) for(x=0; x < y; x++)
#define CICLOWHILE(x, y) while( x < y )
#define CICLODOWHILE(X, Y) do while( x < y )

/*Declaracion de constantes con cont*/
/* Se reservan espacios en memoria  */
const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;

int main (void)

{

  /* Imprimir constantes #define */
  printf("El valor de PI:\n %f \n", PI);
  printf("El valor de G:\n %f \n",G);
  printf("El valor de TAMANIO:\n %d \n",TAMANIO);
  printf("El valor de MIN:\n %d \n",MIN);
  printf("El valor de MAX:\n %d \n",MAX);

  /* Imprimir macros */
  printf("Operacion SUMA: \n %d \n", SUMA(3,4));
  printf("Operacion RESTA:\n %d \n", RESTA(3,4));
  printf("Operacion MULTIPLICACION:\n %d \n", MULT(3,4));
  printf("Operacion DIVICION:\n %d \n", DIV(3,4));
  printf("Operacion POTCUADRADO:\n %d \n", POTCUADRADO(3));
  printf("Operacion POTCUBO:\n %d \n", POTCUBO(3));

  /* Imprimir constantes const */
  printf("El valor de pi:\n %f \n", pi);
  printf("El valor g:\n %f \n",g);
  printf("El valor tamanio:\n %d \n",tamanio);
  printf("El valor min:\n %d \n",min);
  printf("El valor max:\n %d \n",max);



  /* Utilizando las macros de ciclo */
  int x = 5;
  int y = 10;

  CICLOFOR(x, y)
  {
    printf("\n Hola Mundo...\n" );
  }
  
  CICLOWHILE(x, y)
 	{
 	 	printf("\n Un dia mas...\n");
  	 	x=15;

       	}
  CICLODOWHILE(x, y)
  ++x;

  	{
  	  printf("\n La vida es increible...\n");
  	}
  /* TAREA PARA EL DIA LUNES 16 EL CICLO WHILE , DO WHILE*/

  return 0;
}
