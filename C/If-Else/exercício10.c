#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	printf("\n\ndigite um n�mero\n\n");
	scanf("%i", &num);
	
	if (num > 0)
	{
		printf("esse � um n�mero positivo");
	}
	
	else
	{
		if ( num < 0)
		{	
		printf ("esse � um n�mero negativo");
		}
		
		else
		{		  
		 prinf ("esse � um n�mero nulo");
		}
	}		
	return 0;
}
