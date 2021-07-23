#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int  f, c;
	
	printf("\n\ncoloque um numero para ser uma temperatura em fahrenheit\n\n");
	scanf("%i", &f);
	
	c =  (f - 32) * 5 / 9;
	
	printf("\n\nessa temperatura corresponde a %i celsius\n\n", c); 
		
	
	return 0;
}
