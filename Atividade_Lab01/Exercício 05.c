#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, dividir;    //cria duas variaveis do tipo inteiro
    printf("Digite um numero real: ");  //mensagem inicial com instrução
    scanf("%d" , &x);  //Lê um valor e armazena na variavel 'x'
    dividir = x/5;     //divide o valor de x por 5 e armazena na variavel "dividir"
    printf("A quinta parte de %d eh: %d \n" , x, dividir);  //imprime o resultado
    return 0;
}
