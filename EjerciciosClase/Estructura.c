/*--------------------------------------------------*/
/*Autor: Beatriz Garcia Rios -----------------------*/
/*E_mail: beatrizgarciarios@gmail.com --------------*/
/*Fecha de Creacion: 24/04/2018 --------------------*/
/*Fecha de Actualizacion: 24/04/2018 ---------------*/
/*Descripcion: */

/*Declaracion de bibliotecas*/
#include<stdio.h>

/*struct Alumno
{
  char matricula[10];
  char curp[18];
  char nivelEstudio[30];
  char nombre[50];
  int edad;
  char sexo [1];
  char fechaNacimiento [10];
  float peso;
  float estatura;
  char tipoSangre;
  char telefono[12];
  char direccion[50];
  char alergia[20];
  char deporte[15];
  */


/*Colores del texto*/
#define RESET "\xlb[29m"
#define ROJO "\x1b[31m" /*Color rojo*/
#define VERDE "\x1b[32m" /*Color verde*/
#define NEGRO "\x1b[30m"/*Color negro*/
#define AMARILLO "\x1b[33m"/*Color amarillo*/
#define MORADO "\x1b[35m"/*Color morado*/
#define CYAN "\x1b[36m"/*Color cyan*/
#define AZUL "\xlb[34m"/*Color azul*/


#define NEGRITA "\xlb[1m"  /*Texto en negrita*/

/*Definicion tamaños constantes de arreglos*/
#define TAM 15  /*Declaracion del tamaño del arreglo*/
#define TOW 5  /*Declaracion de las filas*/
#define COL 5 /*Declaracion de las columnas*/

/*Definicion de tipo de datos estructura*/
/*
miembros de la estructura;
};
*/
struct Alumno
{
  char matricula[10];
  char nombre[50];
  char sexo [1];
  int edad;
  float peso;
  float estatura;
};
/*El cuerpo de la funcion main*/
int main(void)/*No se le esta enviando ningun parametro a main*/
{
  /*declararcion de la estructura alumno*/
  struct Aumno edson; /*Declaracion de la variable edson*/
    /*Asignacion de datos: a los miembros de la estructura Alumnos*/
    /*Tipo de operador punto(.)*/
    /*edson.matricula = "2017060236";*/

    /*De preferencia utilizar la funcion strcpy() o sctrncpy de la biblioteca string.h*/
    /*strcpy (cadena en la que se copia la cadena a asignar)*/
    strcpy(edson.matricula,"2017060236");
    strcpy(edson.nombre,"SANTOS ZARATE EDSON OSNART");
    edson.sexo = 'H';
    edson.edad = 18;
    edson.estatura = 1.60;
    edson.peso = 60;

/*Lectura de los datos de tipo miembro de la estructura*/
    printf()



}


return 0;
}
