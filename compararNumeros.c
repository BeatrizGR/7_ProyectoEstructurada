#include <stdio.h>

int cantidadesproporcionadas(float x1, float x2, float x3);


int main(void)
{
  float x1=34;
  float x2=25;
  float x3=43;

  int cantidad = cantidadesproporcionadas(x1,x2,x3);
  printf("El numero mayor es %d",cantidad);

  return 0;
}

int cantidadesproporcionadas(float x1, float x2, float x3)

{
  return (x1 > x2 && x1 > x3);

}


