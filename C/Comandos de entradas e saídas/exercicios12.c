#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	float tempo, distancia, velocidadem;
	
	printf("\n\neste programa l� a dist�ncia percorrida e divide pelo tempo, para assim chegar na velocidade m�dia\n\n");
	
	printf("\n\ndigite a dist�ncia percorrida em metros");
	scanf("%f", &distancia);
	
	printf("\n\ndigite o tempo percorrido em segundos");
	scanf("%f", &tempo);
	
	velocidadem = distancia / tempo;
	
	printf("a velocidade m�dia � de %.3f metros por segundos", velocidadem);
	
	
	return 0;
}
