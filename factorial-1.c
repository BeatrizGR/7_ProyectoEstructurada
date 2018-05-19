#include <stdio.h>

int factorial(int n);

int main(void)
{
	int r,n;
	printf("Inserta el valor deseado a determinar su factorial: ");
	scanf("%d",&n);
 	r = factorial(n);
	printf("%d!=%d\n",n,r );
	return 0;
}

int factorial(int n)
{
	int var = 1, factorial;
	for (int i = 1 ; i <= n; ++i)
	{
		factorial = var * i;   /* Operacion para sacar el valor de un numero n facotial */
		var = factorial;       	/* Un numero facotiral es la multiplicacion de todos sus digitos anteriores*/
	}
	return factorial; /* Imprime numeros dobles para evitar problemas de digitos a mostar*/
}
