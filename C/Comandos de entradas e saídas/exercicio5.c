#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, vd, rd;
	
	printf("\n\ndigite dois n�meros\n\n");
	scanf("%i %i", &num1, &num2);
	
	vd = num1 / num2;
	
	rd = num1 % num2;	
	
	printf("\n\no valor da divis�o entre os dois n�meros � %i, e o resto da divis�o � %i", vd, rd);
	
	return 0;
}
