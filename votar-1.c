#include<stdio.h>

int main (void)
{
	int An, Aa, Edad;
	printf("\nIngrese su año de nacimiento: \n");
	scanf("%d",&An);

	printf("Ingrese el año actual: \n");
	scanf("%d",&Aa);

	Edad = Aa - An;
	 if (Edad >= 18)
		 {
			 printf("\nPuede votar\n");
	}else
	  {
			printf("\nNo puede votar\n\n");
		}
	return 0;
}
