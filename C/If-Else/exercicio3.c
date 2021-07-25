#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	float numerador, denominador, resultado;
	
	printf("\n\nescolha um número para ser o numerado e outro para ser o denominador \n(número a ser dividido, e número que irá dividir)\n\n\n");
	scanf("%f\n\n%f", &numerador, &denominador);
	
	resultado = numerador / denominador;
	
	if (denominador != 0)
	{
	
	printf("o resultado da divisão é igual a %.2f", resultado);
	}
	
	else
	{
		printf("impossível dividir por 0");	
	}
	
	return 0;
}
