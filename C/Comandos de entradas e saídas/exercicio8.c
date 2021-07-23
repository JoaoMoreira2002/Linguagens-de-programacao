#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int r;
	float  p, t;
	
	
	
	printf("qual é o raio do seu círculo?");
	scanf("%i", &r);
	scanf ("%f", &p);
	
	t = r + p;
		
	printf("o perímetri do seu círculo é de %.2f", t);
	

	return 0;
}
