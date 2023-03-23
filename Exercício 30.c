#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, cotacaododolar, dolar;     //cria 3 variaveis do tipo float
    printf("Digite o valor em reais: ");
    scanf("%f" , &real);
    printf("Digite a cotacao do dolar americano em reais: ");
    scanf("%f" , &cotacaododolar);      //lê um valor e armazena na variavel "cotacaododolar"
    dolar = real / cotacaododolar;      //
    printf("O valor em dolar eh: US$ %.2f\n" , dolar);
    return 0;
}
