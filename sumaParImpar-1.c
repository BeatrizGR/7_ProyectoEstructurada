#include <stdio.h>
int suma_pares(void);
int suma_impares(void);
int main(void)
{
  printf("De los numeros del 1 al 100 \n" );
  suma_pares();
  suma_impares();
  return 0;
}


int suma_pares(void)
{
  int suma_pares = 0;
  for (int i = 1; i <= 100; i++)/* Ciclo para sumar los numeros pares e impares */
  {
    if(i % 2 == 0)/* Condiciones para saber si es par o impar y posteriormente los suma */
    {
      suma_pares += i;
    }

  }
  printf("La suma de los pares es de  : %d\n", suma_pares );
}


int suma_impares(void)
{
  int suma_impares = 0;
  for (int i = 1; i <= 100; i++)/* Ciclo para sumar los numeros pares e impares */
  {
    if(i % 2 == 1)/* Condiciones para saber si es par o impar y posteriormente los suma */
    {
      suma_impares += i;
    }
  }
    printf("La suma de los impares es de  : %d\n", suma_impares );
}
