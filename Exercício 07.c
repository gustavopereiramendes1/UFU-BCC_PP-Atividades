#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fah;                                   //cria duas variaveis do tipo flutuante
    printf("Digite a temperatura em Fahrenheit: ");       //imprime uma mensagem inicial
    scanf("%f" , &fah);                                   //Lê um valor e armazena em "fah"
    celsius = 5.0*(fah-32.0)/9.0;                         //converte a temperatura de fahrenheit para celsius e armazena em "celsius"
    printf("A temperatura em Celsius eh: %f \n" , celsius);  //imprime o resultado
    return 0;
}
