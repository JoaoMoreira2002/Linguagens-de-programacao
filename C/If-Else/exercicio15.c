#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, resultado;
	char op;
	
	printf("\n\nesse programa � uma simula��o de calculadora\n\n");
	printf("digite um n�mero\n\n");
	scanf("%f", &n1);
	fflush(stdin);
	printf("\n\ndigite um operador matem�tico\n+ para adi��o\n- para subtra��o\n* para multiplica��o\n/ para divis�o\n\n");
	scanf("%c", &op);
	fflush(stdin);
	printf("digite um n�mero\n\n");
	scanf("%f", &n2);
	fflush(stdin);
	
	if (op == '+')
	{
		resultado = n1 + n2;
		printf("o resultado � igual a %f", resultado);
	}
	
	else
	{
		if (op == '-')
		{
		resultado = n1 - n2;
		printf("o resultado � igual a %f", resultado);	
		}	
		else
		
	{
		if (op == '*')
		{
			resultado = n1 * n2;
			printf("o resultado � igual a %f", resultado);
		}
		else
		{
		
		if (op == '/' && n2 != 0)
		{
			resultado = n1 / n2;
			printf("o resultado � igual a %f", resultado);
		}
		else
		printf ("operador inv�lido");
		
		
		}
	 } 		
	}
	
	
	
	
	
	return 0;

}
