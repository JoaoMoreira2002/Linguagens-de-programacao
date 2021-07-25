#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	float peso, altura, imc, alturai;
	
	printf("\n\nesse programa faz o cálculo do IMC, índice de massa corporal\n\n");
	printf("\n\né necessário que você digite a sua altura e o seu peso(nessa respectiva ordem)\n\n");
	scanf("%f %f", &altura, &peso);
	
	alturai = pow(altura, 2);
	imc =  peso / alturai;
	
	if (imc < 18.5)
		{
		printf("\n\nvocê está abaixo do peso, segundo o coeficiente IMC: %.2f\n\n", imc);			
		}
	else
		{
		
		if (imc < 25)
			{
				printf("\n\nvocê está no peso ideal, segundo o coeficiente IMC: %.2f\n\n", imc);			
			}
		else
		{
		
				if (imc < 30)
				{
					printf("você está no sobrepeso, segundo o coeficiente IMC: %.2f", imc);
				}
				
				else{
					if (imc < 35)
					{
						printf("você está no grau de obsedidade I, segundo o coeficiente IMC: %.2f", imc);
						}	
						
						else
						{
							if (imc < 40)
							{
								printf("você está no grau de obsidade II, segundo o coeficiente IMC: %.2f", imc);
							}
							
						else{
							printf("você está no grau de obsidade III, segundo o coeficiente IMC: %.2f", imc);
						}	
							
							
							
						}
						
					
					
				}
		}
		}	

printf ("\n\n tabela IMC\n |imc < 18,5 - abaixo do peso\n |18,5 < imc < |25 - saudável\n |25 < imc < 30 - sobrepeso\n |30 < imc < 35 - obsidade grau I\n |35 < imc < 40 - obsidade grau II(severa)\n |imc > 40 - obsidade grau III(mórbida)");
	return 0;
}
