#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int anon, anoa, ani, idade, idade2;
	
	printf("\nqual foi o ano que voc� nasceu?");
	scanf("%i", &anon);
	
	printf("\nem que ano estamos?");
	scanf("%i", &anoa);
	
	printf("\nvoce j� fez anivers�rio esse ano? se sim digite 1, se n�o digite 0");
	scanf("%i", &ani);
	
	
 	if(ani == 1)
	{
		idade = anoa - anon;
	}
	else
	{
		idade = anoa - 1 - anon;
	}
	
		idade2 = idade * 365;
		
		printf("\n\n a sua idade � de %i anos, e voc� j� viveu por %i dias", idade, idade2);
	
	
	return 0;
}
