#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int ano;
	
	printf("\n\ndigite um ano, e voc� saber� se ele � bissexto\n\n");
	scanf("%i", &ano);
	
	

	if (ano % 100 == 0)
		{
			if (ano % 400 == 0)
			{		
			printf("esse � um ano bissexto");
			}
			else
			{
			printf("esse n�o � um ano bissexto");	
			}
		}
	
	else 
	{	
	
		if (ano % 4 == 0)
		{			
		printf("esse � um ano bissexto");				
		}
		else
		{
		printf("esse n�o � um ano bissexto");
		}
	
	}
	
	return 0;	
}
