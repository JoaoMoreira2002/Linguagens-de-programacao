#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int nf, nl, nr, al, i;
	
	printf("esse programa calcula a m�dia de 30 alunos\n");
	
	
	for (al = 1; al < 31; al++)
	{
	printf("\n\n\n\nesse � o aluno %i", al);
	
	printf("\ninsira a nota de laborat�rio e a nota avaliat�ria\n");
	scanf("%i", &nl);
	scanf("%i", &nr);
	
	nf = (nl*0.4) + (nr*0.6);
	
	if (nf >= 7)
	{
		printf("\na sua nota foi de %i, que � considerado bom\n", nf);
	}
	else
	{
		if(nf >= 5)
		{
			printf("\na sua nota foi de %i, que � considerado razo�vel\n", nf);
		}
		else
		{
			printf("\na sua nota foi de %i, que � considerado ruim\n", nf);
		}
		
		
	}
	
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
