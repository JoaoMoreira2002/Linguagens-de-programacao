#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	float km, l, cm;
	
	printf("\n\neste programa lê a quilometragem percorrida por um carro e o quanto de gasolina ele gastou para isso, calculando o consumo médio de combustível");
	printf("\n\ndigite a quilometragem percorrida");
	scanf("%f", &km);
	
	printf("\n\n digite a gasolina gasta em Litros");
	scanf("%f", &l);
	
	cm = km / l;
	
	printf("\n\n o consumo médio de gasolina do carro é de %.2f quilômetros por litros", cm);
	
	
	return 0;
}
