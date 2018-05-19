#include <stdio.h>

int main(void)
{
    int asiento;
    int array[35] = {0};

      printf("Ingrese el numero de asiento en el que usted desea viajar\n");
      scanf("%d", &asiento);
	for(int i = 0; i<35; i++);
	{
		printf("Igrese un numero de asiento\n");
			scanf("%d", &asiento);
		if (array[asiento-1] == 0)
		{
			printf("asiento disponible");
		}else 
   			{
				printf("asiento no disponible, buscar otro asiento\n");
			}
		asiento = 0;
return 0;
	}



