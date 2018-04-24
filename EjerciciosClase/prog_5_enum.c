/*---------------------------------------------------------*/
/*Autor: Garcia Rios Beatriz ------------------------------*/
/*E_mail: beatrizgarciarios1808@gmail.com -----------------*/
/*Fecha de Creacion: 24/04/2018 ---------------------------*/
/*Fecha de Actualizacion: 24/04/018 -----------------------*/
/*Descripcion: Programa que nos sirve para enumerar variables */
/*---------------------------------------------------------*/

#include<stdio.h>

/*Declaracion de enum */
/*tipo de identificador{lista_de_identificadores}:*/

enum DIAS{L, M, MI, J, V, S, D};
enum MESES{EN = 1, FE, MAR, AB, MAY, JUN, JUL, AG, SE, OC, NO, DI};
enum FRUTAS{manzana, mango, durazno, pera, uva, pina};

enum PRECIOAUTO{NUEVO = 10, SEMINUEVO = -5, USADO, INSERVIBLE};

enum {PROG, MATEDISC, MATEII, TGS, ELECI} var1, var2, var3;

int main(void)
{
 printf("%d\n",USADO);
 printf("%d\n",var1);
 printf("%d\n",var2);
 printf("%d\n",var3);

 enum FRUTAS betty;
   betty=durazno;
     printf("%d\n",betty);

 for(enum MESES index = EN; index <= DI ; index++)
 {
  printf("%d ", index);
 switch(index)
 {
case EN:
   printf("\nEnero\n");
   break;
 case FE:
   printf("\nFebrero\n");
   break;
 case MAR:
   printf("\nMarzo\n");
   break;
 case AB:
   printf("\nAbril\n");
   break;
 case MAY:
   printf("\nMayo\n");
   break;
 case JUN:
   printf("\nJunio\n");
   break;
 case JUL:
   printf("\nJulio\n");
   break;
 case AG:
   printf("\nAgosto\n");
   break;
 case SE:
   printf("\nSeptiembre\n");
   break;
 case OC:
   printf("\nOctubre\n");
   break;
 case NO:
   printf("\nNoviembre\n");
   break;
 case DI:
   printf("\nDiciembre\n");
   break;
 }
 }
 printf("\n");
 return 0;
}
