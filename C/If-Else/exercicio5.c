#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float num1, num2;
	
	printf("\n\nescolha dois numeros\n\n");
	scanf("%f  %f", &num1, &num2);
	
	
	if (num1 < num2)
	{
	printf("\n\nos dois números em ordem crescentes ficam %.2f, %.2f", num1, num2);
	}
		if (num2 < num1	)
		{
		printf("\n\nos dois números em ordem crescentes ficam %.2f, %.2f", num2, num1);
		}

	
	
	
	
	
	return 0;
}
