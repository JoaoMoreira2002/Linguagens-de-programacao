#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1;
	
	printf("\n\nescolha um n�mero que esteja entre 0 a 9\n\n");
	scanf("%i", &num1);
	
		if ( -1 < num1)
		{
			if (num1 < 10)
			{
			printf("seu n�mero se encontra na faixa");
			}
			else 
			{	
			printf("seu n�mero n�o se encontra na faixa");
			}
		}
		else 
		{
			printf("seu n�mero n�o se encontra na faixa");
		}
	

	return 0;
}
