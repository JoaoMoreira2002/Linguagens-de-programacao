#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3;
	
	printf("\n\nescolha dois números, e eles formarão intervalos entre si\n\n");
	scanf("%i %i", &n1, &n2);
	
	printf("\n\nescolha um número qualquer\n\n");
	scanf("%i", &n3);
	
	if  (n3 > n2 || n3 > n1)
	{
		if (n3 < n2 || n3 < n1)
		printf("esse número está entre o intervalos");
		
		else
		printf("esse número não está entre os intervalos");	
		
	}
	
	return 0;		
}
