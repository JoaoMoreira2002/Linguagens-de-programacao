#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int filhos, i;
	float salario, por100 = 0, maiorsal, n2 = 0, mediafilho, mediasalario, n3 = 0, por100r;
	
	
	printf("\n\nprefeitura e aquilo tudo 15 pessoas\n\n");
	
	for (i = 1; i < 16; i++)
	{
	
	printf("\nhabitante %i\n", i);
	printf("salário  ");
	scanf("%f", &salario);
	printf("\nnúmero de filhos  ");
	scanf("%i", &filhos);
	
	if (salario > maiorsal || i == 0)
	{
	maiorsal = salario;
	}
	
	n2 = n2 + salario;
	n3 = n3 + filhos;
	
	if (salario < 500)
	{
		por100++;
	}
	}	
	
	
	mediafilho = n3/15;
	mediasalario = n2/15;
	por100r = (por100/15);
	
	printf("a média de filhos é igual a %.2f\na média do salário é igual a %.2f\no maior salário da população é de %.2f\na porcentagem de pessoas que ganham menos do que 500 reais é igual %.2f\n\n", mediafilho, mediasalario, maiorsal, por100r);
	
	
	
	
	return 0;
}
