#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, kelvin;      //cria duas variaveis do tipo float
    printf("Digite a temperatura em Celsius: ");  //imprime uma mensagem para nao deixar o usuario perdido
    scanf("%f" , &celsius);  //Lê um valor e armazena na variavel "celsius"
    kelvin = celsius + 273.15;   //soma celsius com uma constante para converter para kelvin e armazena na variavel "kelvin"
    printf("A temperatura em Kelvin eh: %f \n" , kelvin);  //imprime o valor de kelvin
    return 0;
}
