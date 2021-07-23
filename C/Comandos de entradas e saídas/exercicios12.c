#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	float tempo, distancia, velocidadem;
	
	printf("\n\neste programa lê a distância percorrida e divide pelo tempo, para assim chegar na velocidade média\n\n");
	
	printf("\n\ndigite a distância percorrida em metros");
	scanf("%f", &distancia);
	
	printf("\n\ndigite o tempo percorrido em segundos");
	scanf("%f", &tempo);
	
	velocidadem = distancia / tempo;
	
	printf("a velocidade média é de %.3f metros por segundos", velocidadem);
	
	
	return 0;
}
