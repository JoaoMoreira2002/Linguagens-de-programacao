#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	float numerador, denominador, resultado;
	
	printf("\n\nescolha um n�mero para ser o numerado e outro para ser o denominador \n(n�mero a ser dividido, e n�mero que ir� dividir)\n\n\n");
	scanf("%f\n\n%f", &numerador, &denominador);
	
	resultado = numerador / denominador;
	
	if (denominador != 0)
	{
	
	printf("o resultado da divis�o � igual a %.2f", resultado);
	}
	
	else
	{
		printf("imposs�vel dividir por 0");	
	}
	
	return 0;
}
