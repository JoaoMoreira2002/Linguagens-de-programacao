#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, i=0, t;
	
	
	printf("\ndigite a tabuada que voc� deseja saber meu compatriota\n");
	
	scanf("%i", &n1);
	
	printf("\n--- A tabuada do n�mero %i ---\n", n1);
	for(i; i < 11; i++)
{
	
	 t = n1 * i;
		printf("\n%i multiplicado por %i � = %i", n1, i, t);
	
	
	
	
	
}
return 0;
}
