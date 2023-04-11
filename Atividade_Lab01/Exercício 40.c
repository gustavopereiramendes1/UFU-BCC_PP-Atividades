#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;
    float desconto = 0.8, diaria = 30, resultado;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d" , &dias);
    resultado = diaria * dias - desconto;
    printf("A quantia liquida a ser paga ao encanador eh: R$%.2f" ,resultado);
    return 0;
}
