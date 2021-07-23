#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, vd, rd;
	
	printf("\n\ndigite dois números\n\n");
	scanf("%i %i", &num1, &num2);
	
	vd = num1 / num2;
	
	rd = num1 % num2;	
	
	printf("\n\no valor da divisão entre os dois números é %i, e o resto da divisão é %i", vd, rd);
	
	return 0;
}
