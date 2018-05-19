#include <stdio.h>
#include <math.h>
float distancia_dos_puntos(float x1, float x2, float y1, float y2);
int main(void)
{
  float x1=5;
  float x2=6.7;
  float y1=8.3;
  float y2=4.5;
  float distancia;
  distancia = distancia_dos_puntos(x1,x2,y1,y2);
  printf("\nLa distancia entre dos puntos es: %f",distancia);

  return 0;
}

float distancia_dos_puntos(float x1, float x2, float y1, float y2)
{
  float distancia;
  distancia=sqrt(((x1-y1)*(x1-y1))+((x2-y2)*(x2-y2)));
  return distancia;
}
