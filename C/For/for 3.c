#include <stdlib.h>
#include <locale.h>



int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, i=0, t;
	
	
	printf("\nDigite 10 n�meros, e ser� informado se eles s�o positivos ou negativos\n");
	
	for(i; i < 11; i++)
{
	
	scanf("%i", &n1);
	 
	 if (n1 < 0)
		printf("\no n�mero � negativo\n");
	else
		printf("\n o n�mero � positivo\n");
	
	
	
}
return 0;
}
