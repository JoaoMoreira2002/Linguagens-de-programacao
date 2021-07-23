#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int metros, centimetros;
	
	printf("\nqual a sua altura?\n\ndigite ela em metros e use ponto no lugar da virgula\n\n");
	scanf("%i", &metros);
	
	centimetros = metros * 100;
	
	printf("a sua altura em centimetros é %i", centimetros);
	
	return 0;
	
}
