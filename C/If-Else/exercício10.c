#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	printf("\n\ndigite um número\n\n");
	scanf("%i", &num);
	
	if (num > 0)
	{
		printf("esse é um número positivo");
	}
	
	else
	{
		if ( num < 0)
		{	
		printf ("esse é um número negativo");
		}
		
		else
		{		  
		 prinf ("esse é um número nulo");
		}
	}		
	return 0;
}
