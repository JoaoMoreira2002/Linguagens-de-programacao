#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, i;
	
	printf("\ndigite dois números\n");
	
	scanf("%i", &n1);
	scanf("%i", &n2);
	
	printf("o intervalo entre eles é:\n");
	

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
	printf("os números são iguais");
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
}
