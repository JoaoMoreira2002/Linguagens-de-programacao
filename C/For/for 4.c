#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, i;
	
	printf("\ndigite dois n�meros\n");
	
	scanf("%i", &n1);
	scanf("%i", &n2);
	
	printf("o intervalo entre eles �:\n");
	

	if (n1 < n2)
	{
	for (i = n1; i < n2; i++)
	{
		++n1;
	printf("%i\t", n1);
	
	
	
	}
	}
	
	else
	{
		if (n1 > n2)
		{
		
	for (i = n2; i < n1; i++)
	{
	++n2;	
	printf("%i\t", n2);
	}
		}
		
		else
		{
	printf("os n�meros s�o iguais");
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
}
