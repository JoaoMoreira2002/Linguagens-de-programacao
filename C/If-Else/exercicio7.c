#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float sal, aumento, reajuste1;
	
	printf("\n\ndigite o seu sal�rio\n\n");
	scanf("%f", &sal);
	
	
	if (sal < 0)
	{
	printf("\n\nesse n�mero n�o � valido");
	}
		else
		{
		if (sal <= 1000)
		{
			reajuste1 = 1.05;
		aumento = sal * reajuste1;
		
		printf("\n\no reajuste desse sal�rio � igual a %.2f", aumento);
		}
		else
			{
				aumento = sal * 1.07;
				printf("\n\no reajuste desse sal�rio � igual a %.2f", aumento);
			}
	
			}
	
	
	return 0;
}
