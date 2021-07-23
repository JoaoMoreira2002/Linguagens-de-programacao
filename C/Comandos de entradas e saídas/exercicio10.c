#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	float oitava, raiz;
	
	
	printf("\n\ndigite um número aleatório\n\n");
	scanf("%i", &numero);
	
	oitava = pow(numero, 8);
	raiz = sqrt(numero);
	
	printf("\n\no seu número elevado a 8 é igual %.2f e a raiz quadrada dela é igual a %.2f\n\n", oitava, raiz);
	
	
	return 0;
}
