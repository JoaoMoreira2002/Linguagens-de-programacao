#include <stdlib.h>
#include <locale.h>



int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, i=0, t;
	
	
	printf("\nDigite 10 números, e será informado se eles são positivos ou negativos\n");
	
	for(i; i < 11; i++)
{
	
	scanf("%i", &n1);
	 
	 if (n1 < 0)
		printf("\no número é negativo\n");
	else
		printf("\n o número é positivo\n");
	
	
	
}
return 0;
}
