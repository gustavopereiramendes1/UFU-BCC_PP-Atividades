#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, antecessor;     //cria duas variaveis
    printf("Digite um numero inteiro: ");
    scanf("%d" , &numero);    //le um valor e armazena na variavel "numero"
    antecessor = numero - 1;   //subtrai em 1 o valor de numero e armazena em antecessor
    printf("O antecessor desse numero eh %d e o sucessor eh %d \n" , antecessor, (numero + 1));   /*fiz de duas formas para fixar a aprendizagem
                                                                                                    uma é fazendo o calculo antes colocando o valor em uma variavel antes de imprimir,
                                                                                                    e a outra é fazendo o calculo dentro do printf*/
    return 0;
}
