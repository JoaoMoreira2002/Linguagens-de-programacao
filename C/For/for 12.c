#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int gen, i = 0, genm;
	float alt, altm, soma = 0, cont = 0, cont2 = 0, altmg = 0;
	
	printf("\n\nPara masculino (1), feminino (2)\n");
	printf("também indique sua altura\n");
	
	for(i = 0; i < 4; i++)
	{
		
		printf("\nesse é o usuário %i\n", i);
		printf("\nselecione seu gênero\n");
		scanf("%i", &gen);
		printf("\nqual é a sua altura?\n");
		scanf("%f", &alt);
		
		if (alt > altm || i == 0)
		{
			altm = alt;
		}
		if (gen == 2)
		{
			soma = soma + alt;
		}
		if (gen == 1)
		{
			cont = cont + 1;
		}
		if (gen == 2)
		{
			cont2 = cont2 + 1;
		}
		system("cls");
		fflush(stdin);
		if (alt == altm && gen == 1)
		{
			genm = 1;
		}
		if (alt == altm && gen == 2)
		{
			genm = 2;
		}
	}
	
	
	
	printf("a maior altura é de %.2f, o número de homens é igual a %.1f, a média  da altura das mulheres é de %.2f\n o sexo da pessoa mais alta é %i", altm, cont, (soma/cont2), genm);
	
	
	
	
	
	return 0;
}
