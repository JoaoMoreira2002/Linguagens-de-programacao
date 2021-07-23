#include <stdio.h>

int main ()
{
	int num1, num2, media;
	
	printf("\n\n escolha dois numeros\n");
	scanf("%i %i", &num1, &num2);
	
	media = (num1 + num2)/2;
	
	printf("\n\na media desses dois numeros eh %i", media);
	
	return 0;
		
}
