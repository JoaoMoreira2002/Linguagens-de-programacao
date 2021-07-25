#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3;
	
	printf("escolha trés números, e o programa mostrara-as em ordem crescente");
	scanf("%i %i %i", &n1, &n2, &n3);	
	
	if (n1 > n2 && n1 > n3)
	{
		if (n2 > n3)
		printf("a ordem crescente dos números é: %i %i %i", n3, n2, n1);
		
		else
		printf("a ordem crescente dos números é: %i %i %i", n2, n3, n1);			
	}
	
	else 
	{
		if (n2 > n1 && n2 > n3)
		{
			
			if (n1 > n3)
		printf("a ordem crescente dos números é: %i %i %i", n3, n1, n2);
		
			else
		printf("a ordem crescente dos números é: %i %i %i", n1, n3, n2);
		}
			
		else
		{
			
			if (n3 > n1 && n3 > n2)
			{
				if (n1 > n2)
				printf("a ordem crescente dos números é: %i %i %i", n2, n1, n3);
		
				else
				printf("a ordem crescente dos números é: %i %i %i", n1, n2, n3);
					
			}
							
		}		 
	}
	
 return 0;	
}
