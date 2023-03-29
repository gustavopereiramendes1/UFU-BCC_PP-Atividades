#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, quadrado;  //Cria duas variaveis do tipo flutuante
    printf("Digite um numero real: ");
    scanf("%f" , &x);   //Lê um valor e armazena em 'X'
    quadrado = x * x;   //Calcula o quadrado de 'X' e armazena na varievel 'quadrado'
    printf("O quadrado desse valor eh: %f \n" , quadrado); //Imprime o valor armazenado na variavel 'quadrado'
    return 0;
}
