#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	float p1, p2, media, recup;
	
	printf("a media de um aluno � igual a divis�o de sua nota 1 e de sua nota 2.\n\ne a media m�nima para ser aprovado deve ser igual a 5\n\n digite duas notas\n\n");
	scanf("%f\n\n %f", &p1, &p2);
	
	media = (p1 + p2) / 2;
	recup = 5 - media;
	
		if (media > 5)
		
		{
			printf("\n\nvoc� foi aprovado");
		}
		else
		{
			printf("\n\nvoce n�o foi aprovado, faltou %.2f pontos para voc� ser aprovado ", recup);
		}
	
	
	return 0;
}
