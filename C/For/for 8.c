#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int i, us, n1 = 0, n2 = 0, n3;
	
	printf("\n\nquantos n�meros vossa gra�a gostaria de receber?\n\n");
	
	scanf("%i", &us);
	
	printf("\n\nDigite os n�meros que voc� deseja somar\n\n");
	
	for (i = 0; i < us; i++)
	{
		
		scanf("%i", &n1);
		
		n2 = n2 + n1;
		
		
	}	
	
	printf("resultado %i", n2);
	
	return 0;
}
