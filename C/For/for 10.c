#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int menor, i, num, maior;
	
	printf("informe 10 n�meros para que eu possa descobrir qual � o menor");
	
	for(i = 0; i < 10; i++)
	{
		scanf("%i", &num);
	
		if (num < menor || i == 0)
		{
			menor = num;
		}
		if (num > maior || i == 0)
		{
			maior = num;
		}
			
	}
	
	printf("o maior n�mero e o menor s�o, respectivamente, %i e %i", maior, menor);
	
	return 0;
}
