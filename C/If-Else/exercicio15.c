#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, resultado;
	char op;
	
	printf("\n\nesse programa é uma simulação de calculadora\n\n");
	printf("digite um número\n\n");
	scanf("%f", &n1);
	fflush(stdin);
	printf("\n\ndigite um operador matemático\n+ para adição\n- para subtração\n* para multiplicação\n/ para divisão\n\n");
	scanf("%c", &op);
	fflush(stdin);
	printf("digite um número\n\n");
	scanf("%f", &n2);
	fflush(stdin);
	
	if (op == '+')
	{
		resultado = n1 + n2;
		printf("o resultado é igual a %f", resultado);
	}
	
	else
	{
		if (op == '-')
		{
		resultado = n1 - n2;
		printf("o resultado é igual a %f", resultado);	
		}	
		else
		
	{
		if (op == '*')
		{
			resultado = n1 * n2;
			printf("o resultado é igual a %f", resultado);
		}
		else
		{
		
		if (op == '/' && n2 != 0)
		{
			resultado = n1 / n2;
			printf("o resultado é igual a %f", resultado);
		}
		else
		printf ("operador inválido");
		
		
		}
	 } 		
	}
	
	
	
	
	
	return 0;

}
