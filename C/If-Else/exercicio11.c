#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3;
	
	printf("\n\nescolha dois n�meros, e eles formar�o intervalos entre si\n\n");
	scanf("%i %i", &n1, &n2);
	
	printf("\n\nescolha um n�mero qualquer\n\n");
	scanf("%i", &n3);
	
	if  (n3 > n2 || n3 > n1)
	{
		if (n3 < n2 || n3 < n1)
		printf("esse n�mero est� entre o intervalos");
		
		else
		printf("esse n�mero n�o est� entre os intervalos");	
		
	}
	
	return 0;		
}
