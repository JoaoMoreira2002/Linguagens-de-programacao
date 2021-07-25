#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int nf, nl, nr, al, i;
	
	printf("esse programa calcula a média de 30 alunos\n");
	
	
	for (al = 1; al < 31; al++)
	{
	printf("\n\n\n\nesse é o aluno %i", al);
	
	printf("\ninsira a nota de laboratório e a nota avaliatória\n");
	scanf("%i", &nl);
	scanf("%i", &nr);
	
	nf = (nl*0.4) + (nr*0.6);
	
	if (nf >= 7)
	{
		printf("\na sua nota foi de %i, que é considerado bom\n", nf);
	}
	else
	{
		if(nf >= 5)
		{
			printf("\na sua nota foi de %i, que é considerado razoável\n", nf);
		}
		else
		{
			printf("\na sua nota foi de %i, que é considerado ruim\n", nf);
		}
		
		
	}
	
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
