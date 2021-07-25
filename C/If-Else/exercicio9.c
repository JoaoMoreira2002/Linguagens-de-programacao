#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int ano;
	
	printf("\n\ndigite um ano, e você saberá se ele é bissexto\n\n");
	scanf("%i", &ano);
	
	

	if (ano % 100 == 0)
		{
			if (ano % 400 == 0)
			{		
			printf("esse é um ano bissexto");
			}
			else
			{
			printf("esse não é um ano bissexto");	
			}
		}
	
	else 
	{	
	
		if (ano % 4 == 0)
		{			
		printf("esse é um ano bissexto");				
		}
		else
		{
		printf("esse não é um ano bissexto");
		}
	
	}
	
	return 0;	
}
