#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int i = 0, num, cont, contn;
	
	printf("esse programa lê 10 números e te prepara uma surpresa\n");
	
	for (i = 0; i < 9; i++)
	{
	scanf("%i\n", &num);
	
	if(num < 0)
	contn++;
	
	else
	cont++;
	}
	
	printf("você digitou %i números positivos e %i números negativos", cont, contn);
	
	
	
	return 0;
}
