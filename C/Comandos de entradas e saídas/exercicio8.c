#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int r;
	float  p, t;
	
	
	
	printf("qual � o raio do seu c�rculo?");
	scanf("%i", &r);
	scanf ("%f", &p);
	
	t = r + p;
		
	printf("o per�metri do seu c�rculo � de %.2f", t);
	

	return 0;
}
