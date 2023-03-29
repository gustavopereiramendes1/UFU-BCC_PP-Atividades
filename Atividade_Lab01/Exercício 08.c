#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kelvin, celsius;  //Cria duas variaveis do tipo flutuante
    printf("Digite a temperatura em Kelvin: ");    //imprime uma mensagem inicial obs:ja ta ficando chato comentar tudo
    scanf("%f" , &kelvin);                          //Lê o valor e armazena na variavel "kelvin"
    celsius = kelvin - 273.15;                      //converte de kelvin para celsius e armazena na variavel "celsius"
    printf("A temperatura em Celsius eh: %f \n" , celsius); //imprime a temperatura em celsius
    return 0;
}
