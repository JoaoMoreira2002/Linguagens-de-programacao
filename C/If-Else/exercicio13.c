#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3;
	
	printf("\n\ndigite tr�s n�meros\n\n");
	scanf("%i %i %i", &n1, &n2, &n3);
	
	if (n1 == n2 && n2 == n3)
	{
		printf("os tr�s n�meros s�o iguais: %i", n1);
	}
	
	else
	{
	
		if (n1 == n2 || n1 == n3)
		
			printf("os dois n�meros s�o iguais: %i", n1);
			
		else
		{
		
			if(n2 == n3)
			{
				printf("os dois n�meros s�o iguais: %i", n2);
			}
			
			else
			{
				printf("nenhum dos n�meros s�o iguais");
			}
	
		}
	}
	return 0;
}
