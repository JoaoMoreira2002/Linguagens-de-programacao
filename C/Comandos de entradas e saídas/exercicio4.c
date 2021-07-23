#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int anon, anoa, ani, idade, idade2;
	
	printf("\nqual foi o ano que você nasceu?");
	scanf("%i", &anon);
	
	printf("\nem que ano estamos?");
	scanf("%i", &anoa);
	
	printf("\nvoce já fez aniversário esse ano? se sim digite 1, se não digite 0");
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
		
		printf("\n\n a sua idade é de %i anos, e você já viveu por %i dias", idade, idade2);
	
	
	return 0;
}
