#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, desconto = 0.12;
    printf("Digite o valor do produto: ");
    scanf("%f" , &preco);
    printf("O valor do produto com desconto eh: %.2f\n" ,(preco - (preco * desconto)));
    return 0;
}
