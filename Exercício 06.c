#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperatura,fah;   //cria duas variaveis do tipo flutuante
    printf("Digite a temperatura em grau Celsius: ");   //imprime uma mensagem inicial
    scanf("%f" , &temperatura); //Lê um valor e armazena na variavel "temperatura"
    fah = temperatura*(9.0/5.0)+32.0;  //converte o valor de temperatura em celsius para fahrenheit
    printf("A temperatura em Fahrenheit eh: %f \n" , fah);  //imprime o resultado
    return 0;
}
