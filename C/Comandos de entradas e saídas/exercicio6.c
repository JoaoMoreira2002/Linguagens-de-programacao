#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int bt, ht, area;
	
	printf("\n\ndigite a base e a altura de um tri�ngulo para saber sua �rea\n");
	scanf("%i %i", &bt, &ht);
	
	area = (bt * ht) / 2;
	printf("\n\na �rea do tri�ngulo � igual a %i\n", area);
	
	
	return 0;
	
}
