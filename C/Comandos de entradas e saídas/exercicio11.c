#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	float km, l, cm;
	
	printf("\n\neste programa l� a quilometragem percorrida por um carro e o quanto de gasolina ele gastou para isso, calculando o consumo m�dio de combust�vel");
	printf("\n\ndigite a quilometragem percorrida");
	scanf("%f", &km);
	
	printf("\n\n digite a gasolina gasta em Litros");
	scanf("%f", &l);
	
	cm = km / l;
	
	printf("\n\n o consumo m�dio de gasolina do carro � de %.2f quil�metros por litros", cm);
	
	
	return 0;
}
