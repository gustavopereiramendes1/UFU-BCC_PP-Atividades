#include <stdio.h>
#include <stdlib.h>
#include <math.h>                //biblioteca que disponibiliza outras ferramentas matematicas

int main()
{
    float x, quadrado;  //Cria duas variaveis do tipo flutuante
    printf("Digite um numero real: ");
    scanf("%f" , &x);   //Lê um valor e armazena em 'X'
    quadrado = pow(x ,2);   //Calcula o quadrado de 'X' e armazena na varievel 'quadrado', utilizando uma ferramenta de outra bibliteca
    printf("O quadrado desse valor eh: %.2f \n" , quadrado); //Imprime o valor armazenado na variavel 'quadrado'
    return 0;
}
