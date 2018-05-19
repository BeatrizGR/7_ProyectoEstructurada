#include <stdio.h>
int numeroorden(int a);
int main(void)
{
  int a=100;
  numeroorden(a);
  return 0;
}

int numeroorden(int a)
{
  for (a=100;a>=1;a--)
	{
		printf("%d\n",a);
	}
}
