#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float min, custo;
	
	printf("esse programa calcula o gasto de um plano de celular.\n\n que começa com 50 reais mensais de custo, para usar por 50 minutos.\n\ne a cada minuto a mais utilizado, é cobrado R$1,50");
	printf("\n\ndigite por quantos minutos você utilizou o seu plano de celular\n\n");
	scanf("%f", &min);
	
	if (min <= 50)
	{
		custo = 50;
		printf("o seu valor a ser pago é de %.2f", custo);
		
	}
	
	else
	{
		custo = ((min - 50) * 1.50) + 50;
		printf("o seu valor a ser pago é de %.2f", custo);
	
	}
	

	
	return 0;
}
