#include<stdio.h>
#include<conio.h>

int main()
{
    float real, cotacao, dolar;
    printf("Digite o valor do produto e o valor do dolar hoje: ");	  
    scanf("%f %f",&real,&cotacao);
    dolar = real/cotacao;
    printf("R$ %.2f => US$ %.2f.",real,dolar);
    getch();
    return 0;
}//main

