//Receber de 3 funcionários o nome e os salários dos últimos 2 meses
#include <stdio.h>
#include <stdlib.h>

int main()
{            //l    c
	char nomes[3] [30];
	/*      0  1 2 3 4 5 6 7 ....29
		0   c  a i o
		1   v  i t o r 
		2   p e d r o
	*/          // l  c
	float salarios[3][2];
		/*            0     1      -- meses (salários de cada mês)
	   func     0   8000   1200 
	   			1   1200   1200
	   			2   2100   3200
	   */
	   
	   
	int i, j, contMaisMin=0;
	
	float somaSal=0;
	
	for (i=0; i<3; i++) //funcionário-- linha
	{
	   	printf("\nCadastro %d", i+1);
		printf("\nNome:");fflush(stdin); gets(nomes[i]);
		   	
		for (j= 0; j<2; j++)   //c - salarios mensais
		{	
		   	printf("Salario do mes %i: ", j+1); scanf("%f", &salarios[i][j]);
		   	somaSal+= salarios[i][j];//somaSal = somaSal + salarios[i];
		   	
		   	if (salarios[i][j]> 1045)
		      	contMaisMin++;
		}
	} 
	
	
	for (i=0; i<3; i++) //funcionário-- linha
	{
		printf("\nNome %s- %.2f %.2f", nomes[i], salarios[i][0], salarios[i][1]);	
	}
	
	printf("\nSoma total dos salarios %.2f", somaSal);
	printf("\n Qtd de salarios maior que o Sal Min %i ", contMaisMin );
	return 0;
}
