#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int bt, ht, area;
	
	printf("\n\ndigite a base e a altura de um triângulo para saber sua área\n");
	scanf("%i %i", &bt, &ht);
	
	area = (bt * ht) / 2;
	printf("\n\na área do triângulo é igual a %i\n", area);
	
	
	return 0;
	
}
