#include <stdio.h>

int sumasparimpar(int a,int b, int suma, int suma1);


int main(void)
{
  int a;
  int b;
  int suma=0;
  int suma1=0;

  int sumas = sumasparimpar(a,b,suma,suma1);

  printf("la suma par es: %d\n",sumas);
  printf("la suma impar es: %d\n",sumas);


  return 0;
}

  int sumasparimpar(int a,int b, int suma, int suma1)

{
   for (a=1;a<=100;a++)
	{
		if (a%2==0)
		{
			printf("%d\n",a);
			suma+=a;
		}
	}
	printf("\t\n");
	for (b=1;b<=100;b++)
	{
		if (b%2!=0)
		{
			printf("%d\n",b);
			suma1+=b;
		}
	}

}


